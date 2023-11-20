// Generated by rstantools.  Do not edit by hand.

/*
    BMABMDR is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    BMABMDR is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with BMABMDR.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.26.1-4-gd72b68b7-dirty
#include <stan/model/model_header.hpp>
namespace model_mH0_Q_namespace {
inline void validate_positive_index(const char* var_name, const char* expr,
                                    int val) {
  if (val < 1) {
    std::stringstream msg;
    msg << "Found dimension size less than one in simplex declaration"
        << "; variable=" << var_name << "; dimension size expression=" << expr
        << "; expression value=" << val;
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
inline void validate_unit_vector_index(const char* var_name, const char* expr,
                                       int val) {
  if (val <= 1) {
    std::stringstream msg;
    if (val == 1) {
      msg << "Found dimension size one in unit vector declaration."
          << " One-dimensional unit vector is discrete"
          << " but the target distribution must be continuous."
          << " variable=" << var_name << "; dimension size expression=" << expr;
    } else {
      msg << "Found dimension size less than one in unit vector declaration"
          << "; variable=" << var_name << "; dimension size expression=" << expr
          << "; expression value=" << val;
    }
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using std::pow;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using stan::model::cons_list;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::nil_index_list;
using namespace stan::math;
using stan::math::pow; 
stan::math::profile_map profiles__;
static int current_statement__= 0;
static const std::vector<string> locations_array__ = {" (found before start of program)",
                                                      " (in 'string', line 35, column 2 to column 28)",
                                                      " (in 'string', line 36, column 2 to column 23)",
                                                      " (in 'string', line 39, column 2 to column 9)",
                                                      " (in 'string', line 40, column 2 to column 15)",
                                                      " (in 'string', line 41, column 2 to column 15)",
                                                      " (in 'string', line 43, column 2 to column 8)",
                                                      " (in 'string', line 53, column 6 to column 20)",
                                                      " (in 'string', line 54, column 6 to column 20)",
                                                      " (in 'string', line 52, column 17 to line 55, column 5)",
                                                      " (in 'string', line 52, column 4 to line 55, column 5)",
                                                      " (in 'string', line 51, column 9 to line 56, column 3)",
                                                      " (in 'string', line 48, column 6 to column 44)",
                                                      " (in 'string', line 49, column 6 to column 52)",
                                                      " (in 'string', line 47, column 17 to line 50, column 5)",
                                                      " (in 'string', line 47, column 4 to line 50, column 5)",
                                                      " (in 'string', line 45, column 18 to line 51, column 3)",
                                                      " (in 'string', line 45, column 2 to line 56, column 3)",
                                                      " (in 'string', line 61, column 3 to column 60)",
                                                      " (in 'string', line 70, column 6 to column 61)",
                                                      " (in 'string', line 72, column 8 to line 74, column 46)",
                                                      " (in 'string', line 71, column 19 to line 75, column 7)",
                                                      " (in 'string', line 71, column 6 to line 75, column 7)",
                                                      " (in 'string', line 69, column 11 to line 76, column 5)",
                                                      " (in 'string', line 66, column 8 to column 87)",
                                                      " (in 'string', line 65, column 20 to line 67, column 7)",
                                                      " (in 'string', line 65, column 6 to line 67, column 7)",
                                                      " (in 'string', line 63, column 17 to line 69, column 5)",
                                                      " (in 'string', line 63, column 3 to line 76, column 5)",
                                                      " (in 'string', line 21, column 2 to column 8)",
                                                      " (in 'string', line 22, column 9 to column 10)",
                                                      " (in 'string', line 22, column 2 to column 14)",
                                                      " (in 'string', line 23, column 9 to column 10)",
                                                      " (in 'string', line 23, column 2 to column 14)",
                                                      " (in 'string', line 24, column 11 to column 12)",
                                                      " (in 'string', line 24, column 2 to column 14)",
                                                      " (in 'string', line 25, column 11 to column 12)",
                                                      " (in 'string', line 25, column 2 to column 14)",
                                                      " (in 'string', line 26, column 2 to column 18)",
                                                      " (in 'string', line 27, column 2 to column 24)",
                                                      " (in 'string', line 28, column 2 to column 24)",
                                                      " (in 'string', line 29, column 2 to column 17)",
                                                      " (in 'string', line 30, column 2 to column 11)",
                                                      " (in 'string', line 31, column 2 to column 31)",
                                                      " (in 'string', line 32, column 2 to column 35)",
                                                      " (in 'string', line 36, column 11 to column 21)",
                                                      " (in 'string', line 40, column 12 to column 13)",
                                                      " (in 'string', line 41, column 12 to column 13)",
                                                      " (in 'string', line 3, column 4 to column 12)",
                                                      " (in 'string', line 4, column 4 to column 12)",
                                                      " (in 'string', line 5, column 4 to column 12)",
                                                      " (in 'string', line 6, column 4 to column 12)",
                                                      " (in 'string', line 7, column 4 to column 15)",
                                                      " (in 'string', line 8, column 4 to column 14)",
                                                      " (in 'string', line 10, column 4 to column 43)",
                                                      " (in 'string', line 11, column 4 to column 42)",
                                                      " (in 'string', line 13, column 4 to column 39)",
                                                      " (in 'string', line 14, column 4 to column 38)",
                                                      " (in 'string', line 15, column 4 to column 41)",
                                                      " (in 'string', line 16, column 4 to column 28)",
                                                      " (in 'string', line 17, column 4 to column 31)",
                                                      " (in 'string', line 2, column 71 to line 18, column 3)"};
template <bool propto__, typename T0__, typename T1__, typename T2__,
typename T3__, typename T4__>
stan::promote_args_t<T0__, T1__, T2__, T3__,
T4__>
pert_dist_lpdf(const T0__& theta, const T1__& lb, const T2__& md,
               const T3__& ub, const T4__& gama, std::ostream* pstream__) {
  using local_scalar_t__ = stan::promote_args_t<T0__,
          T1__,
          T2__,
          T3__,
          T4__>;
  local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
  (void) DUMMY_VAR__;  // suppress unused var warning
  
  try {
    local_scalar_t__ x1;
    x1 = DUMMY_VAR__;
    
    local_scalar_t__ x2;
    x2 = DUMMY_VAR__;
    
    local_scalar_t__ x3;
    x3 = DUMMY_VAR__;
    
    local_scalar_t__ x4;
    x4 = DUMMY_VAR__;
    
    local_scalar_t__ alpha;
    alpha = DUMMY_VAR__;
    
    local_scalar_t__ beta;
    beta = DUMMY_VAR__;
    
    current_statement__ = 54;
    alpha = (1 + ((gama * (md - lb)) / (ub - lb)));
    current_statement__ = 55;
    beta = (1 + ((gama * (ub - md)) / (ub - lb)));
    current_statement__ = 56;
    x1 = ((alpha - 1) * stan::math::log((theta - lb)));
    current_statement__ = 57;
    x2 = ((beta - 1) * stan::math::log((ub - theta)));
    current_statement__ = 58;
    x3 = (((alpha + beta) - 1) * stan::math::log((ub - lb)));
    current_statement__ = 59;
    x4 = lbeta(alpha, beta);
    current_statement__ = 60;
    return (((x1 + x2) - x3) - x4);
  } catch (const std::exception& e) {
    stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
  }
  
}
struct pert_dist_lpdf_functor__ {
template <bool propto__, typename T0__, typename T1__, typename T2__,
typename T3__, typename T4__>
stan::promote_args_t<T0__, T1__, T2__, T3__,
T4__>
operator()(const T0__& theta, const T1__& lb, const T2__& md, const T3__& ub,
           const T4__& gama, std::ostream* pstream__)  const 
{
return pert_dist_lpdf<propto__>(theta, lb, md, ub, gama, pstream__);
}
};
#include <stan_meta_header.hpp>
class model_mH0_Q final : public model_base_crtp<model_mH0_Q> {
private:
  int N;
  Eigen::Matrix<double, -1, 1> n;
  Eigen::Matrix<double, -1, 1> y;
  std::vector<int> yint;
  std::vector<int> nint;
  std::vector<double> priormu;
  double priorlb;
  double priorub;
  double priorgama;
  double eps;
  int is_bin;
  int is_betabin;
 
public:
  ~model_mH0_Q() { }
  
  inline std::string model_name() const final { return "model_mH0_Q"; }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.26.1-4-gd72b68b7-dirty", "stancflags = "};
  }
  
  
  model_mH0_Q(stan::io::var_context& context__,
              unsigned int random_seed__ = 0,
              std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "model_mH0_Q_namespace::model_mH0_Q";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 29;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec());
      N = std::numeric_limits<int>::min();
      
      current_statement__ = 29;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 30;
      validate_non_negative_index("n", "N", N);
      current_statement__ = 31;
      context__.validate_dims("data initialization","n","double",
          context__.to_vec(N));
      n = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(n, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> n_flat__;
        current_statement__ = 31;
        assign(n_flat__, nil_index_list(), context__.vals_r("n"),
          "assigning variable n_flat__");
        current_statement__ = 31;
        pos__ = 1;
        current_statement__ = 31;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 31;
          assign(n, cons_list(index_uni(sym1__), nil_index_list()),
            n_flat__[(pos__ - 1)], "assigning variable n");
          current_statement__ = 31;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 32;
      validate_non_negative_index("y", "N", N);
      current_statement__ = 33;
      context__.validate_dims("data initialization","y","double",
          context__.to_vec(N));
      y = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(y, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> y_flat__;
        current_statement__ = 33;
        assign(y_flat__, nil_index_list(), context__.vals_r("y"),
          "assigning variable y_flat__");
        current_statement__ = 33;
        pos__ = 1;
        current_statement__ = 33;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 33;
          assign(y, cons_list(index_uni(sym1__), nil_index_list()),
            y_flat__[(pos__ - 1)], "assigning variable y");
          current_statement__ = 33;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 34;
      validate_non_negative_index("yint", "N", N);
      current_statement__ = 35;
      context__.validate_dims("data initialization","yint","int",
          context__.to_vec(N));
      yint = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 35;
      assign(yint, nil_index_list(), context__.vals_i("yint"),
        "assigning variable yint");
      current_statement__ = 36;
      validate_non_negative_index("nint", "N", N);
      current_statement__ = 37;
      context__.validate_dims("data initialization","nint","int",
          context__.to_vec(N));
      nint = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 37;
      assign(nint, nil_index_list(), context__.vals_i("nint"),
        "assigning variable nint");
      current_statement__ = 38;
      context__.validate_dims("data initialization","priormu","double",
          context__.to_vec(2));
      priormu = std::vector<double>(2, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 38;
      assign(priormu, nil_index_list(), context__.vals_r("priormu"),
        "assigning variable priormu");
      current_statement__ = 39;
      context__.validate_dims("data initialization","priorlb","double",
          context__.to_vec());
      priorlb = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 39;
      priorlb = context__.vals_r("priorlb")[(1 - 1)];
      current_statement__ = 39;
      current_statement__ = 39;
      check_greater_or_equal(function__, "priorlb", priorlb, 0);
      current_statement__ = 40;
      context__.validate_dims("data initialization","priorub","double",
          context__.to_vec());
      priorub = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 40;
      priorub = context__.vals_r("priorub")[(1 - 1)];
      current_statement__ = 40;
      current_statement__ = 40;
      check_less_or_equal(function__, "priorub", priorub, 1);
      current_statement__ = 41;
      context__.validate_dims("data initialization","priorgama","double",
          context__.to_vec());
      priorgama = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 41;
      priorgama = context__.vals_r("priorgama")[(1 - 1)];
      current_statement__ = 42;
      context__.validate_dims("data initialization","eps","double",
          context__.to_vec());
      eps = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 42;
      eps = context__.vals_r("eps")[(1 - 1)];
      current_statement__ = 43;
      context__.validate_dims("data initialization","is_bin","int",
          context__.to_vec());
      is_bin = std::numeric_limits<int>::min();
      
      current_statement__ = 43;
      is_bin = context__.vals_i("is_bin")[(1 - 1)];
      current_statement__ = 43;
      current_statement__ = 43;
      check_greater_or_equal(function__, "is_bin", is_bin, 0);
      current_statement__ = 43;
      current_statement__ = 43;
      check_less_or_equal(function__, "is_bin", is_bin, 1);
      current_statement__ = 44;
      context__.validate_dims("data initialization","is_betabin","int",
          context__.to_vec());
      is_betabin = std::numeric_limits<int>::min();
      
      current_statement__ = 44;
      is_betabin = context__.vals_i("is_betabin")[(1 - 1)];
      current_statement__ = 44;
      current_statement__ = 44;
      check_greater_or_equal(function__, "is_betabin", is_betabin, 0);
      current_statement__ = 44;
      current_statement__ = 44;
      check_less_or_equal(function__, "is_betabin", is_betabin, 1);
      current_statement__ = 45;
      validate_non_negative_index("rho", "is_betabin", is_betabin);
      current_statement__ = 46;
      validate_non_negative_index("abet", "N", N);
      current_statement__ = 47;
      validate_non_negative_index("bbet", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += 1;
      num_params_r__ += is_betabin;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI, stan::require_vector_like_t<VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    static const char* function__ = "model_mH0_Q_namespace::log_prob";
(void) function__;  // suppress unused var warning
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      local_scalar_t__ par;
      par = DUMMY_VAR__;
      
      current_statement__ = 1;
      par = in__.scalar();
      current_statement__ = 1;
      if (jacobian__) {
        current_statement__ = 1;
        par = stan::math::lub_constrain(par, 0, 1, lp__);
      } else {
        current_statement__ = 1;
        par = stan::math::lub_constrain(par, 0, 1);
      }
      std::vector<local_scalar_t__> rho;
      rho = std::vector<local_scalar_t__>(is_betabin, DUMMY_VAR__);
      
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= is_betabin; ++sym1__) {
        current_statement__ = 2;
        assign(rho, cons_list(index_uni(sym1__), nil_index_list()),
          in__.scalar(), "assigning variable rho");}
      local_scalar_t__ a;
      a = DUMMY_VAR__;
      
      std::vector<local_scalar_t__> abet;
      abet = std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      
      std::vector<local_scalar_t__> bbet;
      bbet = std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      
      current_statement__ = 6;
      a = par;
      current_statement__ = 17;
      if (logical_eq(is_bin, 0)) {
        current_statement__ = 15;
        for (int i = 1; i <= N; ++i) {
          current_statement__ = 12;
          assign(abet, cons_list(index_uni(i), nil_index_list()),
            (a * ((1 / rho[(is_betabin - 1)]) - 1.0)),
            "assigning variable abet");
          current_statement__ = 13;
          assign(bbet, cons_list(index_uni(i), nil_index_list()),
            ((1.0 - a) * ((1.0 / rho[(is_betabin - 1)]) - 1)),
            "assigning variable bbet");}
      } else {
        current_statement__ = 10;
        for (int i = 1; i <= N; ++i) {
          current_statement__ = 7;
          assign(abet, cons_list(index_uni(i), nil_index_list()), 0.0,
            "assigning variable abet");
          current_statement__ = 8;
          assign(bbet, cons_list(index_uni(i), nil_index_list()), 0.0,
            "assigning variable bbet");}
      }
      {
        current_statement__ = 18;
        lp_accum__.add(
          pert_dist_lpdf<propto__>(par, priorlb, priormu[(1 - 1)], priorub,
            priorgama, pstream__));
        current_statement__ = 28;
        if (logical_eq(is_bin, 1)) {
          current_statement__ = 26;
          for (int i = 1; i <= N; ++i) {
            current_statement__ = 24;
            lp_accum__.add(
              ((binomial_coefficient_log(n[(i - 1)], y[(i - 1)]) +
                 (y[(i - 1)] * stan::math::log((a + eps)))) +
                ((n[(i - 1)] - y[(i - 1)]) *
                  stan::math::log(((1 - a) + eps)))));}
        } else {
          current_statement__ = 19;
          lp_accum__.add(
            pert_dist_lpdf<propto__>(rho[(is_betabin - 1)], 0.0,
              priormu[(2 - 1)], 1.0, 4.0, pstream__));
          current_statement__ = 22;
          for (int i = 1; i <= N; ++i) {
            current_statement__ = 20;
            lp_accum__.add(
              ((((((binomial_coefficient_log(n[(i - 1)], y[(i - 1)]) +
                     stan::math::lgamma(((abet[(i - 1)] + y[(i - 1)]) + eps)))
                    +
                    stan::math::lgamma(
                      (((bbet[(i - 1)] + n[(i - 1)]) - y[(i - 1)]) + eps))) -
                   stan::math::lgamma(
                     (((abet[(i - 1)] + bbet[(i - 1)]) + n[(i - 1)]) + eps)))
                  - stan::math::lgamma((abet[(i - 1)] + eps))) -
                 stan::math::lgamma((bbet[(i - 1)] + eps))) +
                stan::math::lgamma(((abet[(i - 1)] + bbet[(i - 1)]) + eps))));
          }
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr>
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.resize(0);
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    static const char* function__ = "model_mH0_Q_namespace::write_array";
(void) function__;  // suppress unused var warning
    (void) function__;  // suppress unused var warning
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      double par;
      par = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      par = in__.scalar();
      current_statement__ = 1;
      par = stan::math::lub_constrain(par, 0, 1);
      std::vector<double> rho;
      rho = std::vector<double>(is_betabin, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= is_betabin; ++sym1__) {
        current_statement__ = 2;
        assign(rho, cons_list(index_uni(sym1__), nil_index_list()),
          in__.scalar(), "assigning variable rho");}
      double a;
      a = std::numeric_limits<double>::quiet_NaN();
      
      std::vector<double> abet;
      abet = std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      std::vector<double> bbet;
      bbet = std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      vars__.emplace_back(par);
      for (int sym1__ = 1; sym1__ <= is_betabin; ++sym1__) {
        vars__.emplace_back(rho[(sym1__ - 1)]);}
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 6;
      a = par;
      current_statement__ = 17;
      if (logical_eq(is_bin, 0)) {
        current_statement__ = 15;
        for (int i = 1; i <= N; ++i) {
          current_statement__ = 12;
          assign(abet, cons_list(index_uni(i), nil_index_list()),
            (a * ((1 / rho[(is_betabin - 1)]) - 1.0)),
            "assigning variable abet");
          current_statement__ = 13;
          assign(bbet, cons_list(index_uni(i), nil_index_list()),
            ((1.0 - a) * ((1.0 / rho[(is_betabin - 1)]) - 1)),
            "assigning variable bbet");}
      } else {
        current_statement__ = 10;
        for (int i = 1; i <= N; ++i) {
          current_statement__ = 7;
          assign(abet, cons_list(index_uni(i), nil_index_list()), 0.0,
            "assigning variable abet");
          current_statement__ = 8;
          assign(bbet, cons_list(index_uni(i), nil_index_list()), 0.0,
            "assigning variable bbet");}
      }
      if (emit_transformed_parameters__) {
        vars__.emplace_back(a);
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          vars__.emplace_back(abet[(sym1__ - 1)]);}
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          vars__.emplace_back(bbet[(sym1__ - 1)]);}
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, stan::require_std_vector_t<VecVar>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void transform_inits_impl(const stan::io::var_context& context__,
                                   VecI& params_i__, VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.clear();
    vars__.reserve(num_params_r__);
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      double par;
      par = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      par = context__.vals_r("par")[(1 - 1)];
      double par_free__;
      par_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      par_free__ = stan::math::lub_free(par, 0, 1);
      std::vector<double> rho;
      rho = std::vector<double>(is_betabin, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 2;
      assign(rho, nil_index_list(), context__.vals_r("rho"),
        "assigning variable rho");
      vars__.emplace_back(par_free__);
      for (int sym1__ = 1; sym1__ <= is_betabin; ++sym1__) {
        vars__.emplace_back(rho[(sym1__ - 1)]);}
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("par");
    names__.emplace_back("rho");
    names__.emplace_back("a");
    names__.emplace_back("abet");
    names__.emplace_back("bbet");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(is_betabin)});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(N)});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(N)});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "par");
    for (int sym1__ = 1; sym1__ <= is_betabin; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "rho" + '.' + std::to_string(sym1__));
      }}
    if (emit_transformed_parameters__) {
      param_names__.emplace_back(std::string() + "a");
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "abet" + '.' + std::to_string(sym1__));
        }}
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "bbet" + '.' + std::to_string(sym1__));
        }}
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "par");
    for (int sym1__ = 1; sym1__ <= is_betabin; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "rho" + '.' + std::to_string(sym1__));
      }}
    if (emit_transformed_parameters__) {
      param_names__.emplace_back(std::string() + "a");
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "abet" + '.' + std::to_string(sym1__));
        }}
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "bbet" + '.' + std::to_string(sym1__));
        }}
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"par\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"rho\",\"type\":{\"name\":\"array\",\"length\":" << is_betabin << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"a\",\"type\":{\"name\":\"real\"},\"block\":\"transformed_parameters\"},{\"name\":\"abet\",\"type\":{\"name\":\"array\",\"length\":" << N << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"bbet\",\"type\":{\"name\":\"array\",\"length\":" << N << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"par\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"rho\",\"type\":{\"name\":\"array\",\"length\":" << is_betabin << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"a\",\"type\":{\"name\":\"real\"},\"block\":\"transformed_parameters\"},{\"name\":\"abet\",\"type\":{\"name\":\"array\",\"length\":" << N << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"bbet\",\"type\":{\"name\":\"array\",\"length\":" << N << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"}]";
    return s__.str();
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      std::vector<double> vars_vec(vars.size());
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i) {
        vars.coeffRef(i) = vars_vec[i];
      }
    }
    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }
    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
  
    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits_impl(context, params_i, params_r_vec, pstream);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i) {
        params_r.coeffRef(i) = params_r_vec[i];
      }
    }
    inline void transform_inits(const stan::io::var_context& context,
                                std::vector<int>& params_i,
                                std::vector<double>& vars,
                                std::ostream* pstream = nullptr) const final {
      transform_inits_impl(context, params_i, vars, pstream);
    }        
};
}
using stan_model = model_mH0_Q_namespace::model_mH0_Q;
#ifndef USING_R
// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_mH0_Q_namespace::profiles__;
}
#endif
#endif