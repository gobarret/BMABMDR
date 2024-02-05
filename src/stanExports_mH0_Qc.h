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
namespace model_mH0_Qc_namespace {
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
                                                      " (in 'string', line 15, column 2 to column 17)",
                                                      " (in 'string', line 16, column 2 to column 28)",
                                                      " (in 'string', line 17, column 2 to column 29)",
                                                      " (in 'string', line 20, column 2 to column 20)",
                                                      " (in 'string', line 21, column 2 to column 18)",
                                                      " (in 'string', line 22, column 2 to column 31)",
                                                      " (in 'string', line 23, column 2 to column 50)",
                                                      " (in 'string', line 24, column 2 to line 25, column 41)",
                                                      " (in 'string', line 43, column 2 to column 31)",
                                                      " (in 'string', line 30, column 11 to column 12)",
                                                      " (in 'string', line 30, column 4 to column 38)",
                                                      " (in 'string', line 31, column 4 to column 20)",
                                                      " (in 'string', line 34, column 6 to column 40)",
                                                      " (in 'string', line 32, column 19 to line 35, column 5)",
                                                      " (in 'string', line 32, column 4 to line 35, column 5)",
                                                      " (in 'string', line 36, column 4 to column 50)",
                                                      " (in 'string', line 38, column 2 to column 19)",
                                                      " (in 'string', line 39, column 2 to column 36)",
                                                      " (in 'string', line 2, column 2 to column 17)",
                                                      " (in 'string', line 3, column 8 to column 9)",
                                                      " (in 'string', line 3, column 2 to column 17)",
                                                      " (in 'string', line 4, column 8 to column 9)",
                                                      " (in 'string', line 4, column 2 to column 22)",
                                                      " (in 'string', line 6, column 2 to column 19)",
                                                      " (in 'string', line 7, column 2 to column 19)",
                                                      " (in 'string', line 8, column 8 to column 9)",
                                                      " (in 'string', line 8, column 2 to column 28)",
                                                      " (in 'string', line 10, column 9 to column 10)",
                                                      " (in 'string', line 10, column 2 to column 18)",
                                                      " (in 'string', line 16, column 18 to column 21)",
                                                      " (in 'string', line 17, column 8 to column 11)",
                                                      " (in 'string', line 17, column 20 to column 23)",
                                                      " (in 'string', line 20, column 9 to column 12)"};
#include <stan_meta_header.hpp>
class model_mH0_Qc final : public model_base_crtp<model_mH0_Qc> {
private:
  int N;
  std::vector<int> Y;
  std::vector<int> trials;
  int N_1;
  int M_1;
  std::vector<int> J_1;
  Eigen::Matrix<double, -1, 1> Z_1_1;
 
public:
  ~model_mH0_Qc() { }
  
  inline std::string model_name() const final { return "model_mH0_Qc"; }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.26.1-4-gd72b68b7-dirty", "stancflags = "};
  }
  
  
  model_mH0_Qc(stan::io::var_context& context__,
               unsigned int random_seed__ = 0,
               std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "model_mH0_Qc_namespace::model_mH0_Qc";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 19;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec());
      N = std::numeric_limits<int>::min();
      
      current_statement__ = 19;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 19;
      current_statement__ = 19;
      check_greater_or_equal(function__, "N", N, 1);
      current_statement__ = 20;
      validate_non_negative_index("Y", "N", N);
      current_statement__ = 21;
      context__.validate_dims("data initialization","Y","int",
          context__.to_vec(N));
      Y = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 21;
      assign(Y, nil_index_list(), context__.vals_i("Y"),
        "assigning variable Y");
      current_statement__ = 22;
      validate_non_negative_index("trials", "N", N);
      current_statement__ = 23;
      context__.validate_dims("data initialization","trials","int",
          context__.to_vec(N));
      trials = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 23;
      assign(trials, nil_index_list(), context__.vals_i("trials"),
        "assigning variable trials");
      current_statement__ = 24;
      context__.validate_dims("data initialization","N_1","int",
          context__.to_vec());
      N_1 = std::numeric_limits<int>::min();
      
      current_statement__ = 24;
      N_1 = context__.vals_i("N_1")[(1 - 1)];
      current_statement__ = 24;
      current_statement__ = 24;
      check_greater_or_equal(function__, "N_1", N_1, 1);
      current_statement__ = 25;
      context__.validate_dims("data initialization","M_1","int",
          context__.to_vec());
      M_1 = std::numeric_limits<int>::min();
      
      current_statement__ = 25;
      M_1 = context__.vals_i("M_1")[(1 - 1)];
      current_statement__ = 25;
      current_statement__ = 25;
      check_greater_or_equal(function__, "M_1", M_1, 1);
      current_statement__ = 26;
      validate_non_negative_index("J_1", "N", N);
      current_statement__ = 27;
      context__.validate_dims("data initialization","J_1","int",
          context__.to_vec(N));
      J_1 = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 27;
      assign(J_1, nil_index_list(), context__.vals_i("J_1"),
        "assigning variable J_1");
      current_statement__ = 27;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 27;
        current_statement__ = 27;
        check_greater_or_equal(function__, "J_1[sym1__]", J_1[(sym1__ - 1)],
                               1);}
      current_statement__ = 28;
      validate_non_negative_index("Z_1_1", "N", N);
      current_statement__ = 29;
      context__.validate_dims("data initialization","Z_1_1","double",
          context__.to_vec(N));
      Z_1_1 = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(Z_1_1, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> Z_1_1_flat__;
        current_statement__ = 29;
        assign(Z_1_1_flat__, nil_index_list(), context__.vals_r("Z_1_1"),
          "assigning variable Z_1_1_flat__");
        current_statement__ = 29;
        pos__ = 1;
        current_statement__ = 29;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 29;
          assign(Z_1_1, cons_list(index_uni(sym1__), nil_index_list()),
            Z_1_1_flat__[(pos__ - 1)], "assigning variable Z_1_1");
          current_statement__ = 29;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 30;
      validate_non_negative_index("sd_1", "M_1", M_1);
      current_statement__ = 31;
      validate_non_negative_index("z_1", "M_1", M_1);
      current_statement__ = 32;
      validate_non_negative_index("z_1", "N_1", N_1);
      current_statement__ = 33;
      validate_non_negative_index("r_1_1", "N_1", N_1);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += 1;
      num_params_r__ += M_1;
      num_params_r__ += M_1 * N_1;
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
    static const char* function__ = "model_mH0_Qc_namespace::log_prob";
(void) function__;  // suppress unused var warning
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      local_scalar_t__ Intercept;
      Intercept = DUMMY_VAR__;
      
      current_statement__ = 1;
      Intercept = in__.scalar();
      Eigen::Matrix<local_scalar_t__, -1, 1> sd_1;
      sd_1 = Eigen::Matrix<local_scalar_t__, -1, 1>(M_1);
      stan::math::fill(sd_1, DUMMY_VAR__);
      
      current_statement__ = 2;
      sd_1 = in__.vector(M_1);
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
        current_statement__ = 2;
        if (jacobian__) {
          current_statement__ = 2;
          assign(sd_1, cons_list(index_uni(sym1__), nil_index_list()),
            stan::math::lb_constrain(sd_1[(sym1__ - 1)], 0, lp__),
            "assigning variable sd_1");
        } else {
          current_statement__ = 2;
          assign(sd_1, cons_list(index_uni(sym1__), nil_index_list()),
            stan::math::lb_constrain(sd_1[(sym1__ - 1)], 0),
            "assigning variable sd_1");
        }}
      std::vector<Eigen::Matrix<local_scalar_t__, -1, 1>> z_1;
      z_1 = std::vector<Eigen::Matrix<local_scalar_t__, -1, 1>>(M_1, Eigen::Matrix<local_scalar_t__, -1, 1>(N_1));
      stan::math::fill(z_1, DUMMY_VAR__);
      
      current_statement__ = 3;
      for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
        current_statement__ = 3;
        assign(z_1, cons_list(index_uni(sym1__), nil_index_list()),
          in__.vector(N_1), "assigning variable z_1");}
      Eigen::Matrix<local_scalar_t__, -1, 1> r_1_1;
      r_1_1 = Eigen::Matrix<local_scalar_t__, -1, 1>(N_1);
      stan::math::fill(r_1_1, DUMMY_VAR__);
      
      local_scalar_t__ lprior;
      lprior = DUMMY_VAR__;
      
      current_statement__ = 5;
      lprior = 0;
      current_statement__ = 6;
      assign(r_1_1, nil_index_list(), multiply(sd_1[(1 - 1)], z_1[(1 - 1)]),
        "assigning variable r_1_1");
      current_statement__ = 7;
      lprior = (lprior + student_t_lpdf<false>(Intercept, 3, 0, 2.5));
      current_statement__ = 8;
      lprior = (lprior +
                 (student_t_lpdf<false>(sd_1, 3, 0, 2.5) -
                   (1 * student_t_lccdf(0, 3, 0, 2.5))));
      {
        current_statement__ = 10;
        validate_non_negative_index("mu", "N", N);
        Eigen::Matrix<local_scalar_t__, -1, 1> mu;
        mu = Eigen::Matrix<local_scalar_t__, -1, 1>(N);
        stan::math::fill(mu, DUMMY_VAR__);
        
        current_statement__ = 11;
        assign(mu, nil_index_list(), rep_vector(0.0, N),
          "assigning variable mu");
        current_statement__ = 12;
        assign(mu, nil_index_list(),
          add(stan::model::deep_copy(mu), Intercept), "assigning variable mu");
        current_statement__ = 15;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 13;
          assign(mu, cons_list(index_uni(n), nil_index_list()),
            (mu[(n - 1)] + (r_1_1[(J_1[(n - 1)] - 1)] * Z_1_1[(n - 1)])),
            "assigning variable mu");}
        current_statement__ = 16;
        lp_accum__.add(binomial_logit_lpmf<false>(Y, trials, mu));
        current_statement__ = 17;
        lp_accum__.add(lprior);
        current_statement__ = 18;
        lp_accum__.add(std_normal_lpdf<false>(z_1[(1 - 1)]));
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
    static const char* function__ = "model_mH0_Qc_namespace::write_array";
(void) function__;  // suppress unused var warning
    (void) function__;  // suppress unused var warning
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      double Intercept;
      Intercept = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      Intercept = in__.scalar();
      Eigen::Matrix<double, -1, 1> sd_1;
      sd_1 = Eigen::Matrix<double, -1, 1>(M_1);
      stan::math::fill(sd_1, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 2;
      sd_1 = in__.vector(M_1);
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
        current_statement__ = 2;
        assign(sd_1, cons_list(index_uni(sym1__), nil_index_list()),
          stan::math::lb_constrain(sd_1[(sym1__ - 1)], 0),
          "assigning variable sd_1");}
      std::vector<Eigen::Matrix<double, -1, 1>> z_1;
      z_1 = std::vector<Eigen::Matrix<double, -1, 1>>(M_1, Eigen::Matrix<double, -1, 1>(N_1));
      stan::math::fill(z_1, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 3;
      for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
        current_statement__ = 3;
        assign(z_1, cons_list(index_uni(sym1__), nil_index_list()),
          in__.vector(N_1), "assigning variable z_1");}
      Eigen::Matrix<double, -1, 1> r_1_1;
      r_1_1 = Eigen::Matrix<double, -1, 1>(N_1);
      stan::math::fill(r_1_1, std::numeric_limits<double>::quiet_NaN());
      
      double lprior;
      lprior = std::numeric_limits<double>::quiet_NaN();
      
      vars__.emplace_back(Intercept);
      for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
        vars__.emplace_back(sd_1[(sym1__ - 1)]);}
      for (int sym1__ = 1; sym1__ <= N_1; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= M_1; ++sym2__) {
          vars__.emplace_back(z_1[(sym2__ - 1)][(sym1__ - 1)]);}}
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 5;
      lprior = 0;
      current_statement__ = 6;
      assign(r_1_1, nil_index_list(), multiply(sd_1[(1 - 1)], z_1[(1 - 1)]),
        "assigning variable r_1_1");
      current_statement__ = 7;
      lprior = (lprior + student_t_lpdf<false>(Intercept, 3, 0, 2.5));
      current_statement__ = 8;
      lprior = (lprior +
                 (student_t_lpdf<false>(sd_1, 3, 0, 2.5) -
                   (1 * student_t_lccdf(0, 3, 0, 2.5))));
      if (emit_transformed_parameters__) {
        for (int sym1__ = 1; sym1__ <= N_1; ++sym1__) {
          vars__.emplace_back(r_1_1[(sym1__ - 1)]);}
        vars__.emplace_back(lprior);
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      double b_Intercept;
      b_Intercept = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 9;
      b_Intercept = Intercept;
      vars__.emplace_back(b_Intercept);
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
      double Intercept;
      Intercept = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      Intercept = context__.vals_r("Intercept")[(1 - 1)];
      Eigen::Matrix<double, -1, 1> sd_1;
      sd_1 = Eigen::Matrix<double, -1, 1>(M_1);
      stan::math::fill(sd_1, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> sd_1_flat__;
        current_statement__ = 2;
        assign(sd_1_flat__, nil_index_list(), context__.vals_r("sd_1"),
          "assigning variable sd_1_flat__");
        current_statement__ = 2;
        pos__ = 1;
        current_statement__ = 2;
        for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
          current_statement__ = 2;
          assign(sd_1, cons_list(index_uni(sym1__), nil_index_list()),
            sd_1_flat__[(pos__ - 1)], "assigning variable sd_1");
          current_statement__ = 2;
          pos__ = (pos__ + 1);}
      }
      Eigen::Matrix<double, -1, 1> sd_1_free__;
      sd_1_free__ = Eigen::Matrix<double, -1, 1>(M_1);
      stan::math::fill(sd_1_free__, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
        current_statement__ = 2;
        assign(sd_1_free__, cons_list(index_uni(sym1__), nil_index_list()),
          stan::math::lb_free(sd_1[(sym1__ - 1)], 0),
          "assigning variable sd_1_free__");}
      std::vector<Eigen::Matrix<double, -1, 1>> z_1;
      z_1 = std::vector<Eigen::Matrix<double, -1, 1>>(M_1, Eigen::Matrix<double, -1, 1>(N_1));
      stan::math::fill(z_1, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> z_1_flat__;
        current_statement__ = 3;
        assign(z_1_flat__, nil_index_list(), context__.vals_r("z_1"),
          "assigning variable z_1_flat__");
        current_statement__ = 3;
        pos__ = 1;
        current_statement__ = 3;
        for (int sym1__ = 1; sym1__ <= N_1; ++sym1__) {
          current_statement__ = 3;
          for (int sym2__ = 1; sym2__ <= M_1; ++sym2__) {
            current_statement__ = 3;
            assign(z_1,
              cons_list(index_uni(sym2__),
                cons_list(index_uni(sym1__), nil_index_list())),
              z_1_flat__[(pos__ - 1)], "assigning variable z_1");
            current_statement__ = 3;
            pos__ = (pos__ + 1);}}
      }
      vars__.emplace_back(Intercept);
      for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
        vars__.emplace_back(sd_1_free__[(sym1__ - 1)]);}
      for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= N_1; ++sym2__) {
          vars__.emplace_back(z_1[(sym1__ - 1)][(sym2__ - 1)]);}}
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("Intercept");
    names__.emplace_back("sd_1");
    names__.emplace_back("z_1");
    names__.emplace_back("r_1_1");
    names__.emplace_back("lprior");
    names__.emplace_back("b_Intercept");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(M_1)});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(M_1),
                                             static_cast<size_t>(N_1)});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(N_1)});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "Intercept");
    for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "sd_1" + '.' + std::to_string(sym1__));
      }}
    for (int sym1__ = 1; sym1__ <= N_1; ++sym1__) {
      {
        for (int sym2__ = 1; sym2__ <= M_1; ++sym2__) {
          {
            param_names__.emplace_back(std::string() + "z_1" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
          }}
      }}
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N_1; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "r_1_1" + '.' + std::to_string(sym1__));
        }}
      param_names__.emplace_back(std::string() + "lprior");
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "b_Intercept");
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "Intercept");
    for (int sym1__ = 1; sym1__ <= M_1; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "sd_1" + '.' + std::to_string(sym1__));
      }}
    for (int sym1__ = 1; sym1__ <= N_1; ++sym1__) {
      {
        for (int sym2__ = 1; sym2__ <= M_1; ++sym2__) {
          {
            param_names__.emplace_back(std::string() + "z_1" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
          }}
      }}
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N_1; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "r_1_1" + '.' + std::to_string(sym1__));
        }}
      param_names__.emplace_back(std::string() + "lprior");
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "b_Intercept");
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"Intercept\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sd_1\",\"type\":{\"name\":\"vector\",\"length\":" << M_1 << "},\"block\":\"parameters\"},{\"name\":\"z_1\",\"type\":{\"name\":\"array\",\"length\":" << M_1 << ",\"element_type\":{\"name\":\"vector\",\"length\":" << N_1 << "}},\"block\":\"parameters\"},{\"name\":\"r_1_1\",\"type\":{\"name\":\"vector\",\"length\":" << N_1 << "},\"block\":\"transformed_parameters\"},{\"name\":\"lprior\",\"type\":{\"name\":\"real\"},\"block\":\"transformed_parameters\"},{\"name\":\"b_Intercept\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"Intercept\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sd_1\",\"type\":{\"name\":\"vector\",\"length\":" << M_1 << "},\"block\":\"parameters\"},{\"name\":\"z_1\",\"type\":{\"name\":\"array\",\"length\":" << M_1 << ",\"element_type\":{\"name\":\"vector\",\"length\":" << N_1 << "}},\"block\":\"parameters\"},{\"name\":\"r_1_1\",\"type\":{\"name\":\"vector\",\"length\":" << N_1 << "},\"block\":\"transformed_parameters\"},{\"name\":\"lprior\",\"type\":{\"name\":\"real\"},\"block\":\"transformed_parameters\"},{\"name\":\"b_Intercept\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]";
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
using stan_model = model_mH0_Qc_namespace::model_mH0_Qc;
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
  return model_mH0_Qc_namespace::profiles__;
}
#endif
#endif
