\name{VCBART}
\alias{VCBART}
\alias{vcbart}
%- Also NEED an '\alias' for EACH other topic documented here.
\title{
Fit a VCBART model.
}
\description{
User-facing wrapper function that does a lot of argument checking and sets 
many default hyper-parameters
}
\usage{
VCBART(Y_train, X_train, Z_train, n_vec_train, 
       X_test, Z_test, n_vec_test, cutpoints, intercept = TRUE,
       split_probs_type = "fixed", split_probs = unif_theta_list,
       error_structure = "ind",
       burn = 500, nd = 1000, verbose = TRUE, print_every = 500)
}
%- maybe also 'usage' for other objects documented here.
\arguments{
  \item{Y_train}{Vector containing the training observations.}
  \item{X_train}{Matrix of covariates for training observations. Assumes that the first column contains all 1's, for the intercept.}
  \item{Z_train}{Matrix of effect modifiers for training observations.}
  \item{n_train}{Vector containing number of training obesrvations for each subject.}
  \item{X_test}{Matrix of covariates for testing observations. Assumes that the first column contains all 1's, for the intercept.}
  \item{Z_test}{Matrix of effect modifiers for testing observations.}
  \item{n_test}{Vector containing number of testing observations for each subject.}
  \item{cutpoints}{List of length R containing all allowable cutpoints for decision trees.}
  \item{intercept}{Indicator of whether or not an intercept function is fit. Default is TRUE}
  \item{M}{Number of trees used to approximate each beta_j Default is 50.}
  \item{error_structure}{String indicating whether to use independent (\code{"ind"}) residual errors or compound symmetry (\code{"cs"}) structured errors}
  \item{split_probs_type}{String indicating whether splitting probabilities are fixed (\code{"fixed"}) or adaptive (\code{"adaptive"})}
  \item{ht_sigma_y}{Logical indicating whether to use a half-t prior on the residual variance. Default is TRUE}
  \item{ht_tau}{Logical indicator whether to use a half-t prior on the leaf variances. Currently half-t priors on tau are not supported.}
  \item{burn}{Number of MCMC iterations to discard as burn-in. Default is 500.}
  \item{nd}{Number of MCMC samples to save. Default is 1000.}
  \item{rho_eps}{Auto-correlation parameter for compound symmetry error structure. Must be between 0 and 1. Ignored if \code{error_structure = "ind"}.}
  \item{split_probs}{List of split probabilities. See details for how to specify. Ignored if \cite{split_probs_type = "adaptive"}.}
  \item{a}{First hyperparameter for discretized Beta prior on split probability concentration parameter. Default is 1.}
  \item{b}{Second hyperparameter for discretized Beta prior on split probability concentration. Default is R.}
  \item{N_u}{Number of grid points for split probability concentration parameter.}
  \item{rho_alpha}{Additional hyperparmeter used to define split probability concentration parameter. Default is R.}
  \item{tau_vec}{Vector of jump (i.e. leaf parameter) variances. Default is constant vector with entries 1/sqrt(M)}
  \item{alpha_vec}{Vector of first hyperparameter of branching process prior on trees. Default is constant vector with entries 0.95.}
  \item{beta_vec}{Vector of second hyperparameter of branching process prior on trees. Default is constant vector with entries 2.}
  \item{sigma_hat}{Initial over-estimate of sigma. Default is 1. Used only if ht_sigma_y = FALSE.}
  \item{nu_sigma}{Degrees of freedom for sigma prior. Default is 7}
  \item{nu_sigma_mu}{Degrees of freedom for sigma_mu prior. Default is 7.}
  \item{variance_prop}{Amount of prior probability that scaled-inverse chi-square prior on sigma (if used) places on the event sigma < sigma_hat. Default is 0.9. Used only if ht_sigma_y = FALSE}
}

\value{A list with entries
\item{f_train_samples}{An nrow(X_train) x nd matrix containing posterior samples of the regression function evaluated at training observations.}
\item{f_test_samples}{An nrow(X_train) x nd matrix containing posterior samples of the regression function evaluated at testing observations.}
\item{beta_train_samples}{An nrow(X_train) x ncol(X_train) x nd array containing posterior samples of each covariate effect function evaluated at training observations.}
\item{beta_test_samples}{An nrow(X_test) x ncol(X_test) x nd array containing posterior samples of each covariate effect function evaluated at testing observations.}
\item{sigma_samples}{A vector of length nd containing posterior samples of sigma.}
\item{var_counts_samples}{An ncol(Z_train) x ncol(Z_train) x nd array containing posterior samples number of times each modifier was used in an internal decision rule in each ensemble.}
\item{time}{Run-time (in seconds) of MCMC chain.}
}


