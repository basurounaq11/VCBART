// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// vc_BART_ar
Rcpp::List vc_BART_ar(arma::vec Y, arma::mat X_train, arma::mat Z_train, arma::vec n_vec_train, arma::vec start_index_vec_train, arma::mat X_test, arma::mat Z_test, arma::vec n_vec_test, arma::vec start_index_vec_test, Rcpp::List xinfo_list, arma::vec sigma_mu_vec, arma::vec alpha_vec, arma::vec beta_vec, size_t burn, size_t nd, double rho, double sigma_hat, size_t m, bool ht_sigma_y, bool ht_sigma_mu, double nu_sigma, double nu_sigma_mu, double variance_prob, bool verbose, size_t print_every);
RcppExport SEXP _VCBART_vc_BART_ar(SEXP YSEXP, SEXP X_trainSEXP, SEXP Z_trainSEXP, SEXP n_vec_trainSEXP, SEXP start_index_vec_trainSEXP, SEXP X_testSEXP, SEXP Z_testSEXP, SEXP n_vec_testSEXP, SEXP start_index_vec_testSEXP, SEXP xinfo_listSEXP, SEXP sigma_mu_vecSEXP, SEXP alpha_vecSEXP, SEXP beta_vecSEXP, SEXP burnSEXP, SEXP ndSEXP, SEXP rhoSEXP, SEXP sigma_hatSEXP, SEXP mSEXP, SEXP ht_sigma_ySEXP, SEXP ht_sigma_muSEXP, SEXP nu_sigmaSEXP, SEXP nu_sigma_muSEXP, SEXP variance_probSEXP, SEXP verboseSEXP, SEXP print_everySEXP) {
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
    Rcpp::traits::input_parameter< arma::vec >::type sigma_mu_vec(sigma_mu_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vec(alpha_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_vec(beta_vecSEXP);
    Rcpp::traits::input_parameter< size_t >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< size_t >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_hat(sigma_hatSEXP);
    Rcpp::traits::input_parameter< size_t >::type m(mSEXP);
    Rcpp::traits::input_parameter< bool >::type ht_sigma_y(ht_sigma_ySEXP);
    Rcpp::traits::input_parameter< bool >::type ht_sigma_mu(ht_sigma_muSEXP);
    Rcpp::traits::input_parameter< double >::type nu_sigma(nu_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type nu_sigma_mu(nu_sigma_muSEXP);
    Rcpp::traits::input_parameter< double >::type variance_prob(variance_probSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< size_t >::type print_every(print_everySEXP);
    rcpp_result_gen = Rcpp::wrap(vc_BART_ar(Y, X_train, Z_train, n_vec_train, start_index_vec_train, X_test, Z_test, n_vec_test, start_index_vec_test, xinfo_list, sigma_mu_vec, alpha_vec, beta_vec, burn, nd, rho, sigma_hat, m, ht_sigma_y, ht_sigma_mu, nu_sigma, nu_sigma_mu, variance_prob, verbose, print_every));
    return rcpp_result_gen;
END_RCPP
}
// vc_BART_cs
Rcpp::List vc_BART_cs(arma::vec Y, arma::mat X_train, arma::mat Z_train, arma::vec n_vec_train, arma::vec start_index_vec_train, arma::mat X_test, arma::mat Z_test, arma::vec n_vec_test, arma::vec start_index_vec_test, Rcpp::List xinfo_list, arma::vec sigma_mu_vec, arma::vec alpha_vec, arma::vec beta_vec, size_t burn, size_t nd, double rho, double sigma_hat, size_t m, bool ht_sigma_y, bool ht_sigma_mu, double nu_sigma, double nu_sigma_mu, double variance_prob, bool verbose, size_t print_every);
RcppExport SEXP _VCBART_vc_BART_cs(SEXP YSEXP, SEXP X_trainSEXP, SEXP Z_trainSEXP, SEXP n_vec_trainSEXP, SEXP start_index_vec_trainSEXP, SEXP X_testSEXP, SEXP Z_testSEXP, SEXP n_vec_testSEXP, SEXP start_index_vec_testSEXP, SEXP xinfo_listSEXP, SEXP sigma_mu_vecSEXP, SEXP alpha_vecSEXP, SEXP beta_vecSEXP, SEXP burnSEXP, SEXP ndSEXP, SEXP rhoSEXP, SEXP sigma_hatSEXP, SEXP mSEXP, SEXP ht_sigma_ySEXP, SEXP ht_sigma_muSEXP, SEXP nu_sigmaSEXP, SEXP nu_sigma_muSEXP, SEXP variance_probSEXP, SEXP verboseSEXP, SEXP print_everySEXP) {
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
    Rcpp::traits::input_parameter< arma::vec >::type sigma_mu_vec(sigma_mu_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vec(alpha_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_vec(beta_vecSEXP);
    Rcpp::traits::input_parameter< size_t >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< size_t >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_hat(sigma_hatSEXP);
    Rcpp::traits::input_parameter< size_t >::type m(mSEXP);
    Rcpp::traits::input_parameter< bool >::type ht_sigma_y(ht_sigma_ySEXP);
    Rcpp::traits::input_parameter< bool >::type ht_sigma_mu(ht_sigma_muSEXP);
    Rcpp::traits::input_parameter< double >::type nu_sigma(nu_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type nu_sigma_mu(nu_sigma_muSEXP);
    Rcpp::traits::input_parameter< double >::type variance_prob(variance_probSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< size_t >::type print_every(print_everySEXP);
    rcpp_result_gen = Rcpp::wrap(vc_BART_cs(Y, X_train, Z_train, n_vec_train, start_index_vec_train, X_test, Z_test, n_vec_test, start_index_vec_test, xinfo_list, sigma_mu_vec, alpha_vec, beta_vec, burn, nd, rho, sigma_hat, m, ht_sigma_y, ht_sigma_mu, nu_sigma, nu_sigma_mu, variance_prob, verbose, print_every));
    return rcpp_result_gen;
END_RCPP
}
// vc_BART_ind
Rcpp::List vc_BART_ind(arma::vec Y, arma::mat X_train, arma::mat Z_train, arma::vec n_vec_train, arma::vec start_index_vec_train, arma::mat X_test, arma::mat Z_test, arma::vec n_vec_test, arma::vec start_index_vec_test, Rcpp::List xinfo_list, arma::vec sigma_mu_vec, arma::vec alpha_vec, arma::vec beta_vec, size_t burn, size_t nd, double sigma_hat, size_t m, bool ht_sigma_y, bool ht_sigma_mu, double nu_sigma, double nu_sigma_mu, double variance_prob, bool verbose, size_t print_every);
RcppExport SEXP _VCBART_vc_BART_ind(SEXP YSEXP, SEXP X_trainSEXP, SEXP Z_trainSEXP, SEXP n_vec_trainSEXP, SEXP start_index_vec_trainSEXP, SEXP X_testSEXP, SEXP Z_testSEXP, SEXP n_vec_testSEXP, SEXP start_index_vec_testSEXP, SEXP xinfo_listSEXP, SEXP sigma_mu_vecSEXP, SEXP alpha_vecSEXP, SEXP beta_vecSEXP, SEXP burnSEXP, SEXP ndSEXP, SEXP sigma_hatSEXP, SEXP mSEXP, SEXP ht_sigma_ySEXP, SEXP ht_sigma_muSEXP, SEXP nu_sigmaSEXP, SEXP nu_sigma_muSEXP, SEXP variance_probSEXP, SEXP verboseSEXP, SEXP print_everySEXP) {
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
    Rcpp::traits::input_parameter< arma::vec >::type sigma_mu_vec(sigma_mu_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vec(alpha_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_vec(beta_vecSEXP);
    Rcpp::traits::input_parameter< size_t >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< size_t >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_hat(sigma_hatSEXP);
    Rcpp::traits::input_parameter< size_t >::type m(mSEXP);
    Rcpp::traits::input_parameter< bool >::type ht_sigma_y(ht_sigma_ySEXP);
    Rcpp::traits::input_parameter< bool >::type ht_sigma_mu(ht_sigma_muSEXP);
    Rcpp::traits::input_parameter< double >::type nu_sigma(nu_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type nu_sigma_mu(nu_sigma_muSEXP);
    Rcpp::traits::input_parameter< double >::type variance_prob(variance_probSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< size_t >::type print_every(print_everySEXP);
    rcpp_result_gen = Rcpp::wrap(vc_BART_ind(Y, X_train, Z_train, n_vec_train, start_index_vec_train, X_test, Z_test, n_vec_test, start_index_vec_test, xinfo_list, sigma_mu_vec, alpha_vec, beta_vec, burn, nd, sigma_hat, m, ht_sigma_y, ht_sigma_mu, nu_sigma, nu_sigma_mu, variance_prob, verbose, print_every));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_VCBART_vc_BART_ar", (DL_FUNC) &_VCBART_vc_BART_ar, 25},
    {"_VCBART_vc_BART_cs", (DL_FUNC) &_VCBART_vc_BART_cs, 25},
    {"_VCBART_vc_BART_ind", (DL_FUNC) &_VCBART_vc_BART_ind, 24},
    {NULL, NULL, 0}
};

RcppExport void R_init_VCBART(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
