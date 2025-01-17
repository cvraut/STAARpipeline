// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/STAARpipeline.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Individual_Score_Test
List Individual_Score_Test(arma::mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::vec residuals);
RcppExport SEXP _STAARpipeline_Individual_Score_Test(SEXP GSEXP, SEXP Sigma_iSEXP, SEXP Sigma_iXSEXP, SEXP covSEXP, SEXP residualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Sigma_i(Sigma_iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_iX(Sigma_iXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    rcpp_result_gen = Rcpp::wrap(Individual_Score_Test(G, Sigma_i, Sigma_iX, cov, residuals));
    return rcpp_result_gen;
END_RCPP
}
// Individual_Score_Test_cond
List Individual_Score_Test_cond(arma::mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::mat X_adj, arma::vec residuals);
RcppExport SEXP _STAARpipeline_Individual_Score_Test_cond(SEXP GSEXP, SEXP Sigma_iSEXP, SEXP Sigma_iXSEXP, SEXP covSEXP, SEXP X_adjSEXP, SEXP residualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Sigma_i(Sigma_iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_iX(Sigma_iXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_adj(X_adjSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    rcpp_result_gen = Rcpp::wrap(Individual_Score_Test_cond(G, Sigma_i, Sigma_iX, cov, X_adj, residuals));
    return rcpp_result_gen;
END_RCPP
}
// Individual_Score_Test_cond_multi
List Individual_Score_Test_cond_multi(arma::mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::mat X_adj, arma::vec residuals, int n_pheno);
RcppExport SEXP _STAARpipeline_Individual_Score_Test_cond_multi(SEXP GSEXP, SEXP Sigma_iSEXP, SEXP Sigma_iXSEXP, SEXP covSEXP, SEXP X_adjSEXP, SEXP residualsSEXP, SEXP n_phenoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Sigma_i(Sigma_iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_iX(Sigma_iXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_adj(X_adjSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< int >::type n_pheno(n_phenoSEXP);
    rcpp_result_gen = Rcpp::wrap(Individual_Score_Test_cond_multi(G, Sigma_i, Sigma_iX, cov, X_adj, residuals, n_pheno));
    return rcpp_result_gen;
END_RCPP
}
// Individual_Score_Test_denseGRM
List Individual_Score_Test_denseGRM(arma::mat G, arma::mat P, arma::vec residuals);
RcppExport SEXP _STAARpipeline_Individual_Score_Test_denseGRM(SEXP GSEXP, SEXP PSEXP, SEXP residualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    rcpp_result_gen = Rcpp::wrap(Individual_Score_Test_denseGRM(G, P, residuals));
    return rcpp_result_gen;
END_RCPP
}
// Individual_Score_Test_denseGRM_multi
List Individual_Score_Test_denseGRM_multi(arma::mat G, arma::mat P, arma::vec residuals, int n_pheno);
RcppExport SEXP _STAARpipeline_Individual_Score_Test_denseGRM_multi(SEXP GSEXP, SEXP PSEXP, SEXP residualsSEXP, SEXP n_phenoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< int >::type n_pheno(n_phenoSEXP);
    rcpp_result_gen = Rcpp::wrap(Individual_Score_Test_denseGRM_multi(G, P, residuals, n_pheno));
    return rcpp_result_gen;
END_RCPP
}
// Individual_Score_Test_multi
List Individual_Score_Test_multi(arma::mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::vec residuals, int n_pheno);
RcppExport SEXP _STAARpipeline_Individual_Score_Test_multi(SEXP GSEXP, SEXP Sigma_iSEXP, SEXP Sigma_iXSEXP, SEXP covSEXP, SEXP residualsSEXP, SEXP n_phenoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Sigma_i(Sigma_iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_iX(Sigma_iXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< int >::type n_pheno(n_phenoSEXP);
    rcpp_result_gen = Rcpp::wrap(Individual_Score_Test_multi(G, Sigma_i, Sigma_iX, cov, residuals, n_pheno));
    return rcpp_result_gen;
END_RCPP
}
// Individual_Score_Test_sp
List Individual_Score_Test_sp(arma::sp_mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::vec residuals);
RcppExport SEXP _STAARpipeline_Individual_Score_Test_sp(SEXP GSEXP, SEXP Sigma_iSEXP, SEXP Sigma_iXSEXP, SEXP covSEXP, SEXP residualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Sigma_i(Sigma_iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_iX(Sigma_iXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    rcpp_result_gen = Rcpp::wrap(Individual_Score_Test_sp(G, Sigma_i, Sigma_iX, cov, residuals));
    return rcpp_result_gen;
END_RCPP
}
// Individual_Score_Test_sp_denseGRM
List Individual_Score_Test_sp_denseGRM(arma::sp_mat G, arma::mat P, arma::vec residuals);
RcppExport SEXP _STAARpipeline_Individual_Score_Test_sp_denseGRM(SEXP GSEXP, SEXP PSEXP, SEXP residualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    rcpp_result_gen = Rcpp::wrap(Individual_Score_Test_sp_denseGRM(G, P, residuals));
    return rcpp_result_gen;
END_RCPP
}
// Individual_Score_Test_sp_denseGRM_multi
List Individual_Score_Test_sp_denseGRM_multi(arma::sp_mat G, arma::mat P, arma::vec residuals, int n_pheno);
RcppExport SEXP _STAARpipeline_Individual_Score_Test_sp_denseGRM_multi(SEXP GSEXP, SEXP PSEXP, SEXP residualsSEXP, SEXP n_phenoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< int >::type n_pheno(n_phenoSEXP);
    rcpp_result_gen = Rcpp::wrap(Individual_Score_Test_sp_denseGRM_multi(G, P, residuals, n_pheno));
    return rcpp_result_gen;
END_RCPP
}
// Individual_Score_Test_sp_multi
List Individual_Score_Test_sp_multi(arma::sp_mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::vec residuals, int n_pheno);
RcppExport SEXP _STAARpipeline_Individual_Score_Test_sp_multi(SEXP GSEXP, SEXP Sigma_iSEXP, SEXP Sigma_iXSEXP, SEXP covSEXP, SEXP residualsSEXP, SEXP n_phenoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Sigma_i(Sigma_iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_iX(Sigma_iXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< int >::type n_pheno(n_phenoSEXP);
    rcpp_result_gen = Rcpp::wrap(Individual_Score_Test_sp_multi(G, Sigma_i, Sigma_iX, cov, residuals, n_pheno));
    return rcpp_result_gen;
END_RCPP
}
// matrix_flip_mean
List matrix_flip_mean(arma::mat G);
static SEXP _STAARpipeline_matrix_flip_mean_try(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_flip_mean(G));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _STAARpipeline_matrix_flip_mean(SEXP GSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_STAARpipeline_matrix_flip_mean_try(GSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// matrix_flip_minor
List matrix_flip_minor(arma::mat G);
static SEXP _STAARpipeline_matrix_flip_minor_try(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_flip_minor(G));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _STAARpipeline_matrix_flip_minor(SEXP GSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_STAARpipeline_matrix_flip_minor_try(GSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _STAARpipeline_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("List(*matrix_flip_mean)(arma::mat)");
        signatures.insert("List(*matrix_flip_minor)(arma::mat)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _STAARpipeline_RcppExport_registerCCallable() { 
    R_RegisterCCallable("STAARpipeline", "_STAARpipeline_matrix_flip_mean", (DL_FUNC)_STAARpipeline_matrix_flip_mean_try);
    R_RegisterCCallable("STAARpipeline", "_STAARpipeline_matrix_flip_minor", (DL_FUNC)_STAARpipeline_matrix_flip_minor_try);
    R_RegisterCCallable("STAARpipeline", "_STAARpipeline_RcppExport_validate", (DL_FUNC)_STAARpipeline_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_STAARpipeline_Individual_Score_Test", (DL_FUNC) &_STAARpipeline_Individual_Score_Test, 5},
    {"_STAARpipeline_Individual_Score_Test_cond", (DL_FUNC) &_STAARpipeline_Individual_Score_Test_cond, 6},
    {"_STAARpipeline_Individual_Score_Test_cond_multi", (DL_FUNC) &_STAARpipeline_Individual_Score_Test_cond_multi, 7},
    {"_STAARpipeline_Individual_Score_Test_denseGRM", (DL_FUNC) &_STAARpipeline_Individual_Score_Test_denseGRM, 3},
    {"_STAARpipeline_Individual_Score_Test_denseGRM_multi", (DL_FUNC) &_STAARpipeline_Individual_Score_Test_denseGRM_multi, 4},
    {"_STAARpipeline_Individual_Score_Test_multi", (DL_FUNC) &_STAARpipeline_Individual_Score_Test_multi, 6},
    {"_STAARpipeline_Individual_Score_Test_sp", (DL_FUNC) &_STAARpipeline_Individual_Score_Test_sp, 5},
    {"_STAARpipeline_Individual_Score_Test_sp_denseGRM", (DL_FUNC) &_STAARpipeline_Individual_Score_Test_sp_denseGRM, 3},
    {"_STAARpipeline_Individual_Score_Test_sp_denseGRM_multi", (DL_FUNC) &_STAARpipeline_Individual_Score_Test_sp_denseGRM_multi, 4},
    {"_STAARpipeline_Individual_Score_Test_sp_multi", (DL_FUNC) &_STAARpipeline_Individual_Score_Test_sp_multi, 6},
    {"_STAARpipeline_matrix_flip_mean", (DL_FUNC) &_STAARpipeline_matrix_flip_mean, 1},
    {"_STAARpipeline_matrix_flip_minor", (DL_FUNC) &_STAARpipeline_matrix_flip_minor, 1},
    {"_STAARpipeline_RcppExport_registerCCallable", (DL_FUNC) &_STAARpipeline_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_STAARpipeline(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
