 functions{
   vector algebra_system(vector y,        // unknowns
               vector theta,    // parameters
               real[] x_r,      // data (real)
               int[] x_i) {     // data (integer)
   vector[1] x;
   real q = x_r[1];

    if(y[1]>0) x[1] = gamma_p(theta[3],y[1]*theta[1]) - (q/(theta[2]-1));
    else if(y[1]<=0) x[1]=1;

   return x;
         }

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
   real init_b; // initial value for b
   vector[5] priormu;
   vector[5] priorlb;
   vector[5] priorub;
   vector[5] shape1;
   vector[5] shape2;
   cov_matrix[5] priorSigma;
 }
 transformed data{
   real x_r[1] = {q};
   int x_i[0];
 }
 parameters{
   vector[5] par;
 }
 transformed parameters{
   real a;
   real c;
   real d;
   real invsigma2;
   vector[3] theta;
   vector[1] y_guess;
   real b;
   vector[1] y;

   a=exp(par[1]);
   c=exp(par[3])+1;
   d=exp(par[4])+0.000000001;
   invsigma2=exp(par[5]);

   theta[1] = exp(par[2]);
   theta[2] = c;
   theta[3] = d;
   y_guess[1] = init_b;

   y = algebra_solver(algebra_system, y_guess, theta, x_r, x_i, 1e-10, positive_infinity(), 1e3);
   b = y[1];
 }
 model{
    par[1] ~ pert_dist(shape1[1], shape2[1], priorlb[1], priorub[1]);
    -par[2] ~ exponential(priormu[2]);
    par[3] ~ pert_dist(shape1[3], shape2[3], priorlb[3], priorub[3]);
    par[4] ~ normal(priormu[4],priorSigma[4,4]);
    par[5] ~ normal(priormu[5],priorSigma[5,5]);

    for (i in 1:N){
      target += -0.5*n[i]*log(2*pi())+0.5*n[i]*log(invsigma2)-0.5*(n[i]-1)*s2[i]*invsigma2-0.5*n[i]*square(m[i]-a-a*(c-1)*
      gamma_cdf(x[i],d,b))*invsigma2;
    }
 }
generated quantities{

real min_response;
real max_response;
real BMD;

min_response = a;
max_response = a*c;
BMD = exp(par[2]);
}
