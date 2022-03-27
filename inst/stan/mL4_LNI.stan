functions {
  real pert_dist_lpdf(real theta, real alpha, real beta, real lb, real ub){
    real x1;
    real x2;
    real x3;
    real x4;

    x1 = (alpha-1) * log((theta - lb));
    x2 = (beta-1) * log((ub - theta));
    x3 = (alpha+beta-1) * log((ub - lb));
    x4 = lbeta(alpha, beta);
    return( x1 + x2 - x3 - x4);
  }
}
data{
  int N;  // the total number of distinct dose group
  vector[N] n;  // the sample size for each dose group
  vector[N] x;  // the dose level of each dose group
  vector[N] m;  // the arithmetic mean of the response values for each dose group
  vector[N] s2;  // the arithmetic variance of the response values for each dose group
  real q;       // the BMR
  vector[5] priormu;
  vector[5] priorlb;
  vector[5] priorub;
  vector[5] shape1;
  vector[5] shape2;
  cov_matrix[5] priorSigma;
}
parameters{
  vector[5] par; // a=a, BMD on log-scale, ct=log(c), dt=log(d), invsigma2t=log(invsigma2)
}
transformed parameters{
  real a;
  real b;
  real c;
  real d;
  real invsigma2;
  a=exp(par[1]);
  c=pow(3,0.5)/pi()*logit(1 - (log(1+q)/a)) - exp(par[3]);
 // c=par[3];
  d=exp(par[4]);
  b=exp(-par[2]*d)*(pow(3,0.5)/pi()*logit(inv_logit(pi()/pow(3,0.5)*c)+log(1+q)/a)-c);
  invsigma2=exp(par[5]);
}
model{
    par[1] ~ pert_dist(shape1[1], shape2[1], priorlb[1], priorub[1]);
    -par[2] ~ exponential(priormu[2]);
    par[3] ~ pert_dist(shape1[3], shape2[3], priorlb[3], priorub[3]);
  par[4] ~ normal(priormu[4],priorSigma[4,4]);
  par[5] ~ normal(priormu[5],priorSigma[5,5]);

   for (i in 1:N){
     target += -0.5*n[i]*log(2*pi())+0.5*n[i]*log(invsigma2)-0.5*(n[i]-1)*s2[i]*invsigma2-0.5*n[i]*square(m[i]-(a*inv_logit(pi()/pow(3,0.5)*(c+b*pow(x[i],d)))))*invsigma2 - m[i]*n[i];
   }
}
generated quantities{
real min_response;
real max_response;
real BMD;

max_response = a;
min_response = a*inv_logit(pi()/pow(3,0.5)*c);
BMD = exp(par[2]);
}