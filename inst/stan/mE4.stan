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
  vector[5] priorlb; //lower bound
  vector[5] priorub; //upper bound
  vector[5] shape1; //alpha
  vector[5] shape2; //beta
  cov_matrix[5] priorSigma;
  int data_type; // data_type; 1 = increasing N, 2 = increasing LN, 3 = decreasing N, 4 = decreasing LN
  int<lower=0, upper=1> is_increasing; // indicator for increasing data
  real L; //lower bound for increasing data
  int<lower=0, upper=1> is_decreasing; // indicator for decreasing data
  real U; // upper bound for decreasing data
}
parameters{
 real<lower=0> par1;
 real<lower=0, upper=1> par2; // BMD
 real<lower=0> pars3i[is_increasing]; // will be size one if is_increasing
 real<lower=0, upper=1> pars3d[is_decreasing]; // will be size one if is_decreasing
 real par4;
 real par5;
}
transformed parameters{
  real b;
  real a;
  real c;
  real par3;
  real d;
  real k;
  real mu_inf;
  real invsigma2;
  real mu_0;

  mu_0 = par1;

  if(data_type == 1 || data_type == 3){
    a = par1;
  }else if(data_type == 2 || data_type == 4){
    a = log(par1);
  }

  if(is_increasing){
    par3 = L + pars3i[1];
  }else if(is_decreasing){
    par3 = L + (U - L) .* pars3d[1];
  }

  mu_inf = par1*par3;

  if(data_type == 1 || data_type == 3){
    c = mu_inf/mu_0;
  }else if(data_type == 2 || data_type == 4){
    c = log(mu_inf)/log(mu_0);
  }

  d = exp(par4);
  k = log(par2);

  if(data_type == 1){
    b=-exp(-k*d)*log(1-q/(c-1));
  }else if(data_type == 2){
    b=-exp(-k*d)*log(1-(log(1+q)/(a*(c-1))));
  }else if(data_type == 3){
    b=-exp(-k*d)*log(1+q/(c-1));
  }else if(data_type == 4){
    b=-exp(-k*d)*log(1-(log(1-q)/(a*(c-1))));
  }

  invsigma2=exp(par5);
}
model{
    par1 ~ pert_dist(shape1[1], shape2[1], priorlb[1], priorub[1]);
    par2 ~ pert_dist(shape1[2], shape2[2], priorlb[2], priorub[2]);
    par3 ~ pert_dist(shape1[3], shape2[3], priorlb[3], priorub[3]);
    par4 ~ normal(priormu[4],priorSigma[4,4]);
    par5 ~ normal(priormu[5],priorSigma[5,5]);

   if(data_type == 1 || data_type == 3){
    for (i in 1:N){
     target += -0.5*n[i]*log(2*pi())+0.5*n[i]*log(invsigma2)-
     0.5*(n[i]-1)*s2[i]*invsigma2-
     0.5*n[i]*square(m[i]-a-a*(c-1)*(1-exp(-b*pow(x[i],d))))*invsigma2;
    }
   }else if(data_type == 2 || data_type == 4){
    for (i in 1:N){
     target += -0.5*n[i]*log(2*pi())+0.5*n[i]*log(invsigma2)-
     0.5*(n[i]-1)*s2[i]*invsigma2-
     0.5*n[i]*square(m[i]-a-a*(c-1)*(1-exp(-b*pow(x[i],d))))*invsigma2 - m[i]*n[i];
    }
   }
}
