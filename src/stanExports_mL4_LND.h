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
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.21.0
#include <stan/model/model_header.hpp>
namespace model_mL4_LND_namespace {
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;
static int current_statement_begin__;
stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_mL4_LND");
    reader.add_event(68, 66, "end", "model_mL4_LND");
    return reader;
}
template <bool propto, typename T0__, typename T1__, typename T2__, typename T3__, typename T4__>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type
pert_dist_lpdf(const T0__& theta,
                   const T1__& alpha,
                   const T2__& beta,
                   const T3__& lb,
                   const T4__& ub, std::ostream* pstream__) {
    typedef typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type local_scalar_t__;
    typedef local_scalar_t__ fun_return_scalar_t__;
    const static bool propto__ = true;
    (void) propto__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
    int current_statement_begin__ = -1;
    try {
        {
        current_statement_begin__ = 3;
        local_scalar_t__ x1(DUMMY_VAR__);
        (void) x1;  // dummy to suppress unused var warning
        stan::math::initialize(x1, DUMMY_VAR__);
        stan::math::fill(x1, DUMMY_VAR__);
        current_statement_begin__ = 4;
        local_scalar_t__ x2(DUMMY_VAR__);
        (void) x2;  // dummy to suppress unused var warning
        stan::math::initialize(x2, DUMMY_VAR__);
        stan::math::fill(x2, DUMMY_VAR__);
        current_statement_begin__ = 5;
        local_scalar_t__ x3(DUMMY_VAR__);
        (void) x3;  // dummy to suppress unused var warning
        stan::math::initialize(x3, DUMMY_VAR__);
        stan::math::fill(x3, DUMMY_VAR__);
        current_statement_begin__ = 6;
        local_scalar_t__ x4(DUMMY_VAR__);
        (void) x4;  // dummy to suppress unused var warning
        stan::math::initialize(x4, DUMMY_VAR__);
        stan::math::fill(x4, DUMMY_VAR__);
        current_statement_begin__ = 8;
        stan::math::assign(x1, ((alpha - 1) * stan::math::log((theta - lb))));
        current_statement_begin__ = 9;
        stan::math::assign(x2, ((beta - 1) * stan::math::log((ub - theta))));
        current_statement_begin__ = 10;
        stan::math::assign(x3, (((alpha + beta) - 1) * stan::math::log((ub - lb))));
        current_statement_begin__ = 11;
        stan::math::assign(x4, lbeta(alpha, beta));
        current_statement_begin__ = 12;
        return stan::math::promote_scalar<fun_return_scalar_t__>((((x1 + x2) - x3) - x4));
        }
    } catch (const std::exception& e) {
        stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
        // Next line prevents compiler griping about no return
        throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
    }
}
template <typename T0__, typename T1__, typename T2__, typename T3__, typename T4__>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type
pert_dist_lpdf(const T0__& theta,
                   const T1__& alpha,
                   const T2__& beta,
                   const T3__& lb,
                   const T4__& ub, std::ostream* pstream__) {
    return pert_dist_lpdf<false>(theta,alpha,beta,lb,ub, pstream__);
}
struct pert_dist_lpdf_functor__ {
    template <bool propto, typename T0__, typename T1__, typename T2__, typename T3__, typename T4__>
        typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type
    operator()(const T0__& theta,
                   const T1__& alpha,
                   const T2__& beta,
                   const T3__& lb,
                   const T4__& ub, std::ostream* pstream__) const {
        return pert_dist_lpdf(theta, alpha, beta, lb, ub, pstream__);
    }
};
#include <stan_meta_header.hpp>
class model_mL4_LND
  : public stan::model::model_base_crtp<model_mL4_LND> {
private:
        int N;
        vector_d n;
        vector_d x;
        vector_d m;
        vector_d s2;
        double q;
        vector_d priormu;
        vector_d priorlb;
        vector_d priorub;
        vector_d shape1;
        vector_d shape2;
        matrix_d priorSigma;
public:
    model_mL4_LND(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, 0, pstream__);
    }
    model_mL4_LND(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, random_seed__, pstream__);
    }
    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;
        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning
        current_statement_begin__ = -1;
        static const char* function__ = "model_mL4_LND_namespace::model_mL4_LND";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
        try {
            // initialize data block variables from context__
            current_statement_begin__ = 16;
            context__.validate_dims("data initialization", "N", "int", context__.to_vec());
            N = int(0);
            vals_i__ = context__.vals_i("N");
            pos__ = 0;
            N = vals_i__[pos__++];
            current_statement_begin__ = 17;
            validate_non_negative_index("n", "N", N);
            context__.validate_dims("data initialization", "n", "vector_d", context__.to_vec(N));
            n = Eigen::Matrix<double, Eigen::Dynamic, 1>(N);
            vals_r__ = context__.vals_r("n");
            pos__ = 0;
            size_t n_j_1_max__ = N;
            for (size_t j_1__ = 0; j_1__ < n_j_1_max__; ++j_1__) {
                n(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 18;
            validate_non_negative_index("x", "N", N);
            context__.validate_dims("data initialization", "x", "vector_d", context__.to_vec(N));
            x = Eigen::Matrix<double, Eigen::Dynamic, 1>(N);
            vals_r__ = context__.vals_r("x");
            pos__ = 0;
            size_t x_j_1_max__ = N;
            for (size_t j_1__ = 0; j_1__ < x_j_1_max__; ++j_1__) {
                x(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 19;
            validate_non_negative_index("m", "N", N);
            context__.validate_dims("data initialization", "m", "vector_d", context__.to_vec(N));
            m = Eigen::Matrix<double, Eigen::Dynamic, 1>(N);
            vals_r__ = context__.vals_r("m");
            pos__ = 0;
            size_t m_j_1_max__ = N;
            for (size_t j_1__ = 0; j_1__ < m_j_1_max__; ++j_1__) {
                m(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 20;
            validate_non_negative_index("s2", "N", N);
            context__.validate_dims("data initialization", "s2", "vector_d", context__.to_vec(N));
            s2 = Eigen::Matrix<double, Eigen::Dynamic, 1>(N);
            vals_r__ = context__.vals_r("s2");
            pos__ = 0;
            size_t s2_j_1_max__ = N;
            for (size_t j_1__ = 0; j_1__ < s2_j_1_max__; ++j_1__) {
                s2(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 21;
            context__.validate_dims("data initialization", "q", "double", context__.to_vec());
            q = double(0);
            vals_r__ = context__.vals_r("q");
            pos__ = 0;
            q = vals_r__[pos__++];
            current_statement_begin__ = 22;
            validate_non_negative_index("priormu", "5", 5);
            context__.validate_dims("data initialization", "priormu", "vector_d", context__.to_vec(5));
            priormu = Eigen::Matrix<double, Eigen::Dynamic, 1>(5);
            vals_r__ = context__.vals_r("priormu");
            pos__ = 0;
            size_t priormu_j_1_max__ = 5;
            for (size_t j_1__ = 0; j_1__ < priormu_j_1_max__; ++j_1__) {
                priormu(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 23;
            validate_non_negative_index("priorlb", "5", 5);
            context__.validate_dims("data initialization", "priorlb", "vector_d", context__.to_vec(5));
            priorlb = Eigen::Matrix<double, Eigen::Dynamic, 1>(5);
            vals_r__ = context__.vals_r("priorlb");
            pos__ = 0;
            size_t priorlb_j_1_max__ = 5;
            for (size_t j_1__ = 0; j_1__ < priorlb_j_1_max__; ++j_1__) {
                priorlb(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 24;
            validate_non_negative_index("priorub", "5", 5);
            context__.validate_dims("data initialization", "priorub", "vector_d", context__.to_vec(5));
            priorub = Eigen::Matrix<double, Eigen::Dynamic, 1>(5);
            vals_r__ = context__.vals_r("priorub");
            pos__ = 0;
            size_t priorub_j_1_max__ = 5;
            for (size_t j_1__ = 0; j_1__ < priorub_j_1_max__; ++j_1__) {
                priorub(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 25;
            validate_non_negative_index("shape1", "5", 5);
            context__.validate_dims("data initialization", "shape1", "vector_d", context__.to_vec(5));
            shape1 = Eigen::Matrix<double, Eigen::Dynamic, 1>(5);
            vals_r__ = context__.vals_r("shape1");
            pos__ = 0;
            size_t shape1_j_1_max__ = 5;
            for (size_t j_1__ = 0; j_1__ < shape1_j_1_max__; ++j_1__) {
                shape1(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 26;
            validate_non_negative_index("shape2", "5", 5);
            context__.validate_dims("data initialization", "shape2", "vector_d", context__.to_vec(5));
            shape2 = Eigen::Matrix<double, Eigen::Dynamic, 1>(5);
            vals_r__ = context__.vals_r("shape2");
            pos__ = 0;
            size_t shape2_j_1_max__ = 5;
            for (size_t j_1__ = 0; j_1__ < shape2_j_1_max__; ++j_1__) {
                shape2(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 27;
            validate_non_negative_index("priorSigma", "5", 5);
            validate_non_negative_index("priorSigma", "5", 5);
            context__.validate_dims("data initialization", "priorSigma", "matrix_d", context__.to_vec(5,5));
            priorSigma = Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>(5, 5);
            vals_r__ = context__.vals_r("priorSigma");
            pos__ = 0;
            size_t priorSigma_j_2_max__ = 5;
            size_t priorSigma_j_1_max__ = 5;
            for (size_t j_2__ = 0; j_2__ < priorSigma_j_2_max__; ++j_2__) {
                for (size_t j_1__ = 0; j_1__ < priorSigma_j_1_max__; ++j_1__) {
                    priorSigma(j_1__, j_2__) = vals_r__[pos__++];
                }
            }
            stan::math::check_cov_matrix(function__, "priorSigma", priorSigma);
            // initialize transformed data variables
            // execute transformed data statements
            // validate transformed data
            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 30;
            validate_non_negative_index("par", "5", 5);
            num_params_r__ += 5;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }
    ~model_mL4_LND() { }
    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        typedef double local_scalar_t__;
        stan::io::writer<double> writer__(params_r__, params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;
        current_statement_begin__ = 30;
        if (!(context__.contains_r("par")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable par missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("par");
        pos__ = 0U;
        validate_non_negative_index("par", "5", 5);
        context__.validate_dims("parameter initialization", "par", "vector_d", context__.to_vec(5));
        Eigen::Matrix<double, Eigen::Dynamic, 1> par(5);
        size_t par_j_1_max__ = 5;
        for (size_t j_1__ = 0; j_1__ < par_j_1_max__; ++j_1__) {
            par(j_1__) = vals_r__[pos__++];
        }
        try {
            writer__.vector_unconstrain(par);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable par: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }
    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }
    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(std::vector<T__>& params_r__,
                 std::vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {
        typedef T__ local_scalar_t__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // dummy to suppress unused var warning
        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;
        try {
            stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
            // model parameters
            current_statement_begin__ = 30;
            Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> par;
            (void) par;  // dummy to suppress unused var warning
            if (jacobian__)
                par = in__.vector_constrain(5, lp__);
            else
                par = in__.vector_constrain(5);
            // transformed parameters
            current_statement_begin__ = 33;
            local_scalar_t__ a;
            (void) a;  // dummy to suppress unused var warning
            stan::math::initialize(a, DUMMY_VAR__);
            stan::math::fill(a, DUMMY_VAR__);
            current_statement_begin__ = 34;
            local_scalar_t__ b;
            (void) b;  // dummy to suppress unused var warning
            stan::math::initialize(b, DUMMY_VAR__);
            stan::math::fill(b, DUMMY_VAR__);
            current_statement_begin__ = 35;
            local_scalar_t__ c;
            (void) c;  // dummy to suppress unused var warning
            stan::math::initialize(c, DUMMY_VAR__);
            stan::math::fill(c, DUMMY_VAR__);
            current_statement_begin__ = 36;
            local_scalar_t__ d;
            (void) d;  // dummy to suppress unused var warning
            stan::math::initialize(d, DUMMY_VAR__);
            stan::math::fill(d, DUMMY_VAR__);
            current_statement_begin__ = 37;
            local_scalar_t__ invsigma2;
            (void) invsigma2;  // dummy to suppress unused var warning
            stan::math::initialize(invsigma2, DUMMY_VAR__);
            stan::math::fill(invsigma2, DUMMY_VAR__);
            // transformed parameters block statements
            current_statement_begin__ = 38;
            stan::math::assign(a, stan::math::exp(get_base1(par, 1, "par", 1)));
            current_statement_begin__ = 40;
            stan::math::assign(c, (((pow(3, 0.5) / stan::math::pi()) * logit((1 + (stan::math::log((1 - q)) / a)))) - stan::math::exp(get_base1(par, 3, "par", 1))));
            current_statement_begin__ = 41;
            stan::math::assign(d, stan::math::exp(get_base1(par, 4, "par", 1)));
            current_statement_begin__ = 42;
            stan::math::assign(b, (stan::math::exp((-(get_base1(par, 2, "par", 1)) * d)) * (((pow(3, 0.5) / stan::math::pi()) * logit((inv_logit(((stan::math::pi() / pow(3, 0.5)) * c)) - (stan::math::log((1 - q)) / a)))) - c)));
            current_statement_begin__ = 43;
            stan::math::assign(invsigma2, stan::math::exp(get_base1(par, 5, "par", 1)));
            // validate transformed parameters
            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning
            current_statement_begin__ = 33;
            if (stan::math::is_uninitialized(a)) {
                std::stringstream msg__;
                msg__ << "Undefined transformed parameter: a";
                stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable a: ") + msg__.str()), current_statement_begin__, prog_reader__());
            }
            current_statement_begin__ = 34;
            if (stan::math::is_uninitialized(b)) {
                std::stringstream msg__;
                msg__ << "Undefined transformed parameter: b";
                stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable b: ") + msg__.str()), current_statement_begin__, prog_reader__());
            }
            current_statement_begin__ = 35;
            if (stan::math::is_uninitialized(c)) {
                std::stringstream msg__;
                msg__ << "Undefined transformed parameter: c";
                stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable c: ") + msg__.str()), current_statement_begin__, prog_reader__());
            }
            current_statement_begin__ = 36;
            if (stan::math::is_uninitialized(d)) {
                std::stringstream msg__;
                msg__ << "Undefined transformed parameter: d";
                stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable d: ") + msg__.str()), current_statement_begin__, prog_reader__());
            }
            current_statement_begin__ = 37;
            if (stan::math::is_uninitialized(invsigma2)) {
                std::stringstream msg__;
                msg__ << "Undefined transformed parameter: invsigma2";
                stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable invsigma2: ") + msg__.str()), current_statement_begin__, prog_reader__());
            }
            // model body
            current_statement_begin__ = 46;
            lp_accum__.add(pert_dist_lpdf<propto__>(get_base1(par, 1, "par", 1), get_base1(shape1, 1, "shape1", 1), get_base1(shape2, 1, "shape2", 1), get_base1(priorlb, 1, "priorlb", 1), get_base1(priorub, 1, "priorub", 1), pstream__));
            current_statement_begin__ = 47;
            lp_accum__.add(exponential_log<propto__>(-(get_base1(par, 2, "par", 1)), get_base1(priormu, 2, "priormu", 1)));
            current_statement_begin__ = 48;
            lp_accum__.add(pert_dist_lpdf<propto__>(get_base1(par, 3, "par", 1), get_base1(shape1, 3, "shape1", 1), get_base1(shape2, 3, "shape2", 1), get_base1(priorlb, 3, "priorlb", 1), get_base1(priorub, 3, "priorub", 1), pstream__));
            current_statement_begin__ = 49;
            lp_accum__.add(normal_log<propto__>(get_base1(par, 4, "par", 1), get_base1(priormu, 4, "priormu", 1), get_base1(priorSigma, 4, 4, "priorSigma", 1)));
            current_statement_begin__ = 50;
            lp_accum__.add(normal_log<propto__>(get_base1(par, 5, "par", 1), get_base1(priormu, 5, "priormu", 1), get_base1(priorSigma, 5, 5, "priorSigma", 1)));
            current_statement_begin__ = 52;
            for (int i = 1; i <= N; ++i) {
                current_statement_begin__ = 53;
                lp_accum__.add(((((((-(0.5) * get_base1(n, i, "n", 1)) * stan::math::log((2 * stan::math::pi()))) + ((0.5 * get_base1(n, i, "n", 1)) * stan::math::log(invsigma2))) - (((0.5 * (get_base1(n, i, "n", 1) - 1)) * get_base1(s2, i, "s2", 1)) * invsigma2)) - (((0.5 * get_base1(n, i, "n", 1)) * square((get_base1(m, i, "m", 1) - ((a * (1 + inv_logit(((stan::math::pi() / pow(3, 0.5)) * c)))) - (a * inv_logit(((stan::math::pi() / pow(3, 0.5)) * (c + (b * pow(get_base1(x, i, "x", 1), d)))))))))) * invsigma2)) - (get_base1(m, i, "m", 1) * get_base1(n, i, "n", 1))));
            }
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
        lp_accum__.add(lp__);
        return lp_accum__.sum();
    } // log_prob()
    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }
    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("par");
        names__.push_back("a");
        names__.push_back("b");
        names__.push_back("c");
        names__.push_back("d");
        names__.push_back("invsigma2");
        names__.push_back("min_response");
        names__.push_back("max_response");
        names__.push_back("BMD");
    }
    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dims__.push_back(5);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
    }
    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;
        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
        static const char* function__ = "model_mL4_LND_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning
        // read-transform, write parameters
        Eigen::Matrix<double, Eigen::Dynamic, 1> par = in__.vector_constrain(5);
        size_t par_j_1_max__ = 5;
        for (size_t j_1__ = 0; j_1__ < par_j_1_max__; ++j_1__) {
            vars__.push_back(par(j_1__));
        }
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
        if (!include_tparams__ && !include_gqs__) return;
        try {
            // declare and define transformed parameters
            current_statement_begin__ = 33;
            double a;
            (void) a;  // dummy to suppress unused var warning
            stan::math::initialize(a, DUMMY_VAR__);
            stan::math::fill(a, DUMMY_VAR__);
            current_statement_begin__ = 34;
            double b;
            (void) b;  // dummy to suppress unused var warning
            stan::math::initialize(b, DUMMY_VAR__);
            stan::math::fill(b, DUMMY_VAR__);
            current_statement_begin__ = 35;
            double c;
            (void) c;  // dummy to suppress unused var warning
            stan::math::initialize(c, DUMMY_VAR__);
            stan::math::fill(c, DUMMY_VAR__);
            current_statement_begin__ = 36;
            double d;
            (void) d;  // dummy to suppress unused var warning
            stan::math::initialize(d, DUMMY_VAR__);
            stan::math::fill(d, DUMMY_VAR__);
            current_statement_begin__ = 37;
            double invsigma2;
            (void) invsigma2;  // dummy to suppress unused var warning
            stan::math::initialize(invsigma2, DUMMY_VAR__);
            stan::math::fill(invsigma2, DUMMY_VAR__);
            // do transformed parameters statements
            current_statement_begin__ = 38;
            stan::math::assign(a, stan::math::exp(get_base1(par, 1, "par", 1)));
            current_statement_begin__ = 40;
            stan::math::assign(c, (((pow(3, 0.5) / stan::math::pi()) * logit((1 + (stan::math::log((1 - q)) / a)))) - stan::math::exp(get_base1(par, 3, "par", 1))));
            current_statement_begin__ = 41;
            stan::math::assign(d, stan::math::exp(get_base1(par, 4, "par", 1)));
            current_statement_begin__ = 42;
            stan::math::assign(b, (stan::math::exp((-(get_base1(par, 2, "par", 1)) * d)) * (((pow(3, 0.5) / stan::math::pi()) * logit((inv_logit(((stan::math::pi() / pow(3, 0.5)) * c)) - (stan::math::log((1 - q)) / a)))) - c)));
            current_statement_begin__ = 43;
            stan::math::assign(invsigma2, stan::math::exp(get_base1(par, 5, "par", 1)));
            if (!include_gqs__ && !include_tparams__) return;
            // validate transformed parameters
            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning
            // write transformed parameters
            if (include_tparams__) {
                vars__.push_back(a);
                vars__.push_back(b);
                vars__.push_back(c);
                vars__.push_back(d);
                vars__.push_back(invsigma2);
            }
            if (!include_gqs__) return;
            // declare and define generated quantities
            current_statement_begin__ = 58;
            double min_response;
            (void) min_response;  // dummy to suppress unused var warning
            stan::math::initialize(min_response, DUMMY_VAR__);
            stan::math::fill(min_response, DUMMY_VAR__);
            current_statement_begin__ = 59;
            double max_response;
            (void) max_response;  // dummy to suppress unused var warning
            stan::math::initialize(max_response, DUMMY_VAR__);
            stan::math::fill(max_response, DUMMY_VAR__);
            current_statement_begin__ = 60;
            double BMD;
            (void) BMD;  // dummy to suppress unused var warning
            stan::math::initialize(BMD, DUMMY_VAR__);
            stan::math::fill(BMD, DUMMY_VAR__);
            // generated quantities statements
            current_statement_begin__ = 62;
            stan::math::assign(min_response, a);
            current_statement_begin__ = 63;
            stan::math::assign(max_response, (a * inv_logit(((stan::math::pi() / pow(3, 0.5)) * c))));
            current_statement_begin__ = 64;
            stan::math::assign(BMD, stan::math::exp(get_base1(par, 2, "par", 1)));
            // validate, write generated quantities
            current_statement_begin__ = 58;
            vars__.push_back(min_response);
            current_statement_begin__ = 59;
            vars__.push_back(max_response);
            current_statement_begin__ = 60;
            vars__.push_back(BMD);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }
    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng, params_r_vec, params_i_vec, vars_vec, include_tparams, include_gqs, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }
    std::string model_name() const {
        return "model_mL4_LND";
    }
    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        size_t par_j_1_max__ = 5;
        for (size_t j_1__ = 0; j_1__ < par_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "par" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        if (!include_gqs__ && !include_tparams__) return;
        if (include_tparams__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "a";
            param_names__.push_back(param_name_stream__.str());
            param_name_stream__.str(std::string());
            param_name_stream__ << "b";
            param_names__.push_back(param_name_stream__.str());
            param_name_stream__.str(std::string());
            param_name_stream__ << "c";
            param_names__.push_back(param_name_stream__.str());
            param_name_stream__.str(std::string());
            param_name_stream__ << "d";
            param_names__.push_back(param_name_stream__.str());
            param_name_stream__.str(std::string());
            param_name_stream__ << "invsigma2";
            param_names__.push_back(param_name_stream__.str());
        }
        if (!include_gqs__) return;
        param_name_stream__.str(std::string());
        param_name_stream__ << "min_response";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "max_response";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "BMD";
        param_names__.push_back(param_name_stream__.str());
    }
    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        size_t par_j_1_max__ = 5;
        for (size_t j_1__ = 0; j_1__ < par_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "par" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        if (!include_gqs__ && !include_tparams__) return;
        if (include_tparams__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "a";
            param_names__.push_back(param_name_stream__.str());
            param_name_stream__.str(std::string());
            param_name_stream__ << "b";
            param_names__.push_back(param_name_stream__.str());
            param_name_stream__.str(std::string());
            param_name_stream__ << "c";
            param_names__.push_back(param_name_stream__.str());
            param_name_stream__.str(std::string());
            param_name_stream__ << "d";
            param_names__.push_back(param_name_stream__.str());
            param_name_stream__.str(std::string());
            param_name_stream__ << "invsigma2";
            param_names__.push_back(param_name_stream__.str());
        }
        if (!include_gqs__) return;
        param_name_stream__.str(std::string());
        param_name_stream__ << "min_response";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "max_response";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "BMD";
        param_names__.push_back(param_name_stream__.str());
    }
}; // model
}  // namespace
typedef model_mL4_LND_namespace::model_mL4_LND stan_model;
#ifndef USING_R
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
#endif
#endif
