// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// vcbart_cs_adapt_split
Rcpp::List vcbart_cs_adapt_split(arma::vec Y, arma::mat X_train, arma::mat Z_train, arma::vec n_vec_train, arma::vec start_index_vec_train, arma::mat X_test, arma::mat Z_test, arma::vec n_vec_test, arma::vec start_index_vec_test, Rcpp::List xinfo_list, size_t M, bool ht_sigma_y, bool ht_tau, size_t burn, size_t nd, bool verbose, size_t print_every, double rho_eps, double a, double b, size_t N_u, double rho_alpha, arma::vec tau_vec, arma::vec alpha_vec, arma::vec beta_vec, double sigma_hat, double nu_sigma, double nu_tau, double variance_prob);
RcppExport SEXP _VCBART_vcbart_cs_adapt_split(SEXP YSEXP, SEXP X_trainSEXP, SEXP Z_trainSEXP, SEXP n_vec_trainSEXP, SEXP start_index_vec_trainSEXP, SEXP X_testSEXP, SEXP Z_testSEXP, SEXP n_vec_testSEXP, SEXP start_index_vec_testSEXP, SEXP xinfo_listSEXP, SEXP MSEXP, SEXP ht_sigma_ySEXP, SEXP ht_tauSEXP, SEXP burnSEXP, SEXP ndSEXP, SEXP verboseSEXP, SEXP print_everySEXP, SEXP rho_epsSEXP, SEXP aSEXP, SEXP bSEXP, SEXP N_uSEXP, SEXP rho_alphaSEXP, SEXP tau_vecSEXP, SEXP alpha_vecSEXP, SEXP beta_vecSEXP, SEXP sigma_hatSEXP, SEXP nu_sigmaSEXP, SEXP nu_tauSEXP, SEXP variance_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_train(X_trainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z_train(Z_trainSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type n_vec_train(n_vec_trainSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start_index_vec_train(start_index_vec_trainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_test(X_testSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z_test(Z_testSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type n_vec_test(n_vec_testSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start_index_vec_test(start_index_vec_testSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xinfo_list(xinfo_listSEXP);
    Rcpp::traits::input_parameter< size_t >::type M(MSEXP);
    Rcpp::traits::input_parameter< bool >::type ht_sigma_y(ht_sigma_ySEXP);
    Rcpp::traits::input_parameter< bool >::type ht_tau(ht_tauSEXP);
    Rcpp::traits::input_parameter< size_t >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< size_t >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< size_t >::type print_every(print_everySEXP);
    Rcpp::traits::input_parameter< double >::type rho_eps(rho_epsSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< size_t >::type N_u(N_uSEXP);
    Rcpp::traits::input_parameter< double >::type rho_alpha(rho_alphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau_vec(tau_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vec(alpha_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_vec(beta_vecSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_hat(sigma_hatSEXP);
    Rcpp::traits::input_parameter< double >::type nu_sigma(nu_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type nu_tau(nu_tauSEXP);
    Rcpp::traits::input_parameter< double >::type variance_prob(variance_probSEXP);
    rcpp_result_gen = Rcpp::wrap(vcbart_cs_adapt_split(Y, X_train, Z_train, n_vec_train, start_index_vec_train, X_test, Z_test, n_vec_test, start_index_vec_test, xinfo_list, M, ht_sigma_y, ht_tau, burn, nd, verbose, print_every, rho_eps, a, b, N_u, rho_alpha, tau_vec, alpha_vec, beta_vec, sigma_hat, nu_sigma, nu_tau, variance_prob));
    return rcpp_result_gen;
END_RCPP
}
// vcbart_cs_fixed_split
Rcpp::List vcbart_cs_fixed_split(arma::vec Y, arma::mat X_train, arma::mat Z_train, arma::vec n_vec_train, arma::vec start_index_vec_train, arma::mat X_test, arma::mat Z_test, arma::vec n_vec_test, arma::vec start_index_vec_test, Rcpp::List xinfo_list, size_t M, bool ht_sigma_y, bool ht_tau, size_t burn, size_t nd, bool verbose, size_t print_every, double rho_eps, Rcpp::List theta_list, arma::vec tau_vec, arma::vec alpha_vec, arma::vec beta_vec, double sigma_hat, double nu_sigma, double nu_tau, double variance_prob);
RcppExport SEXP _VCBART_vcbart_cs_fixed_split(SEXP YSEXP, SEXP X_trainSEXP, SEXP Z_trainSEXP, SEXP n_vec_trainSEXP, SEXP start_index_vec_trainSEXP, SEXP X_testSEXP, SEXP Z_testSEXP, SEXP n_vec_testSEXP, SEXP start_index_vec_testSEXP, SEXP xinfo_listSEXP, SEXP MSEXP, SEXP ht_sigma_ySEXP, SEXP ht_tauSEXP, SEXP burnSEXP, SEXP ndSEXP, SEXP verboseSEXP, SEXP print_everySEXP, SEXP rho_epsSEXP, SEXP theta_listSEXP, SEXP tau_vecSEXP, SEXP alpha_vecSEXP, SEXP beta_vecSEXP, SEXP sigma_hatSEXP, SEXP nu_sigmaSEXP, SEXP nu_tauSEXP, SEXP variance_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_train(X_trainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z_train(Z_trainSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type n_vec_train(n_vec_trainSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start_index_vec_train(start_index_vec_trainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_test(X_testSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z_test(Z_testSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type n_vec_test(n_vec_testSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start_index_vec_test(start_index_vec_testSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xinfo_list(xinfo_listSEXP);
    Rcpp::traits::input_parameter< size_t >::type M(MSEXP);
    Rcpp::traits::input_parameter< bool >::type ht_sigma_y(ht_sigma_ySEXP);
    Rcpp::traits::input_parameter< bool >::type ht_tau(ht_tauSEXP);
    Rcpp::traits::input_parameter< size_t >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< size_t >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< size_t >::type print_every(print_everySEXP);
    Rcpp::traits::input_parameter< double >::type rho_eps(rho_epsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type theta_list(theta_listSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau_vec(tau_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vec(alpha_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_vec(beta_vecSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_hat(sigma_hatSEXP);
    Rcpp::traits::input_parameter< double >::type nu_sigma(nu_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type nu_tau(nu_tauSEXP);
    Rcpp::traits::input_parameter< double >::type variance_prob(variance_probSEXP);
    rcpp_result_gen = Rcpp::wrap(vcbart_cs_fixed_split(Y, X_train, Z_train, n_vec_train, start_index_vec_train, X_test, Z_test, n_vec_test, start_index_vec_test, xinfo_list, M, ht_sigma_y, ht_tau, burn, nd, verbose, print_every, rho_eps, theta_list, tau_vec, alpha_vec, beta_vec, sigma_hat, nu_sigma, nu_tau, variance_prob));
    return rcpp_result_gen;
END_RCPP
}
// vcbart_ind_adapt_split
Rcpp::List vcbart_ind_adapt_split(arma::vec Y, arma::mat X_train, arma::mat Z_train, arma::vec n_vec_train, arma::vec start_index_vec_train, arma::mat X_test, arma::mat Z_test, arma::vec n_vec_test, arma::vec start_index_vec_test, Rcpp::List xinfo_list, size_t M, bool ht_sigma_y, bool ht_tau, size_t burn, size_t nd, bool verbose, size_t print_every, double a, double b, size_t N_u, double rho_alpha, arma::vec tau_vec, arma::vec alpha_vec, arma::vec beta_vec, double sigma_hat, double nu_sigma, double nu_tau, double variance_prob);
RcppExport SEXP _VCBART_vcbart_ind_adapt_split(SEXP YSEXP, SEXP X_trainSEXP, SEXP Z_trainSEXP, SEXP n_vec_trainSEXP, SEXP start_index_vec_trainSEXP, SEXP X_testSEXP, SEXP Z_testSEXP, SEXP n_vec_testSEXP, SEXP start_index_vec_testSEXP, SEXP xinfo_listSEXP, SEXP MSEXP, SEXP ht_sigma_ySEXP, SEXP ht_tauSEXP, SEXP burnSEXP, SEXP ndSEXP, SEXP verboseSEXP, SEXP print_everySEXP, SEXP aSEXP, SEXP bSEXP, SEXP N_uSEXP, SEXP rho_alphaSEXP, SEXP tau_vecSEXP, SEXP alpha_vecSEXP, SEXP beta_vecSEXP, SEXP sigma_hatSEXP, SEXP nu_sigmaSEXP, SEXP nu_tauSEXP, SEXP variance_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_train(X_trainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z_train(Z_trainSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type n_vec_train(n_vec_trainSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start_index_vec_train(start_index_vec_trainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_test(X_testSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z_test(Z_testSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type n_vec_test(n_vec_testSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start_index_vec_test(start_index_vec_testSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xinfo_list(xinfo_listSEXP);
    Rcpp::traits::input_parameter< size_t >::type M(MSEXP);
    Rcpp::traits::input_parameter< bool >::type ht_sigma_y(ht_sigma_ySEXP);
    Rcpp::traits::input_parameter< bool >::type ht_tau(ht_tauSEXP);
    Rcpp::traits::input_parameter< size_t >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< size_t >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< size_t >::type print_every(print_everySEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< size_t >::type N_u(N_uSEXP);
    Rcpp::traits::input_parameter< double >::type rho_alpha(rho_alphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau_vec(tau_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vec(alpha_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_vec(beta_vecSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_hat(sigma_hatSEXP);
    Rcpp::traits::input_parameter< double >::type nu_sigma(nu_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type nu_tau(nu_tauSEXP);
    Rcpp::traits::input_parameter< double >::type variance_prob(variance_probSEXP);
    rcpp_result_gen = Rcpp::wrap(vcbart_ind_adapt_split(Y, X_train, Z_train, n_vec_train, start_index_vec_train, X_test, Z_test, n_vec_test, start_index_vec_test, xinfo_list, M, ht_sigma_y, ht_tau, burn, nd, verbose, print_every, a, b, N_u, rho_alpha, tau_vec, alpha_vec, beta_vec, sigma_hat, nu_sigma, nu_tau, variance_prob));
    return rcpp_result_gen;
END_RCPP
}
// vcbart_ind_fixed_split
Rcpp::List vcbart_ind_fixed_split(arma::vec Y, arma::mat X_train, arma::mat Z_train, arma::vec n_vec_train, arma::vec start_index_vec_train, arma::mat X_test, arma::mat Z_test, arma::vec n_vec_test, arma::vec start_index_vec_test, Rcpp::List xinfo_list, size_t M, bool ht_sigma_y, bool ht_tau, size_t burn, size_t nd, bool verbose, size_t print_every, Rcpp::List theta_list, arma::vec tau_vec, arma::vec alpha_vec, arma::vec beta_vec, double sigma_hat, double nu_sigma, double nu_tau, double variance_prob);
RcppExport SEXP _VCBART_vcbart_ind_fixed_split(SEXP YSEXP, SEXP X_trainSEXP, SEXP Z_trainSEXP, SEXP n_vec_trainSEXP, SEXP start_index_vec_trainSEXP, SEXP X_testSEXP, SEXP Z_testSEXP, SEXP n_vec_testSEXP, SEXP start_index_vec_testSEXP, SEXP xinfo_listSEXP, SEXP MSEXP, SEXP ht_sigma_ySEXP, SEXP ht_tauSEXP, SEXP burnSEXP, SEXP ndSEXP, SEXP verboseSEXP, SEXP print_everySEXP, SEXP theta_listSEXP, SEXP tau_vecSEXP, SEXP alpha_vecSEXP, SEXP beta_vecSEXP, SEXP sigma_hatSEXP, SEXP nu_sigmaSEXP, SEXP nu_tauSEXP, SEXP variance_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_train(X_trainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z_train(Z_trainSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type n_vec_train(n_vec_trainSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start_index_vec_train(start_index_vec_trainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_test(X_testSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z_test(Z_testSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type n_vec_test(n_vec_testSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start_index_vec_test(start_index_vec_testSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xinfo_list(xinfo_listSEXP);
    Rcpp::traits::input_parameter< size_t >::type M(MSEXP);
    Rcpp::traits::input_parameter< bool >::type ht_sigma_y(ht_sigma_ySEXP);
    Rcpp::traits::input_parameter< bool >::type ht_tau(ht_tauSEXP);
    Rcpp::traits::input_parameter< size_t >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< size_t >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< size_t >::type print_every(print_everySEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type theta_list(theta_listSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau_vec(tau_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vec(alpha_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_vec(beta_vecSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_hat(sigma_hatSEXP);
    Rcpp::traits::input_parameter< double >::type nu_sigma(nu_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type nu_tau(nu_tauSEXP);
    Rcpp::traits::input_parameter< double >::type variance_prob(variance_probSEXP);
    rcpp_result_gen = Rcpp::wrap(vcbart_ind_fixed_split(Y, X_train, Z_train, n_vec_train, start_index_vec_train, X_test, Z_test, n_vec_test, start_index_vec_test, xinfo_list, M, ht_sigma_y, ht_tau, burn, nd, verbose, print_every, theta_list, tau_vec, alpha_vec, beta_vec, sigma_hat, nu_sigma, nu_tau, variance_prob));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_VCBART_vcbart_cs_adapt_split", (DL_FUNC) &_VCBART_vcbart_cs_adapt_split, 29},
    {"_VCBART_vcbart_cs_fixed_split", (DL_FUNC) &_VCBART_vcbart_cs_fixed_split, 26},
    {"_VCBART_vcbart_ind_adapt_split", (DL_FUNC) &_VCBART_vcbart_ind_adapt_split, 28},
    {"_VCBART_vcbart_ind_fixed_split", (DL_FUNC) &_VCBART_vcbart_ind_fixed_split, 25},
    {NULL, NULL, 0}
};

RcppExport void R_init_VCBART(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
