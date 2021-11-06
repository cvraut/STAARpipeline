// [[Rcpp::depends(RcppArmadillo)]]

#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <math.h> 
using namespace Rcpp;

// [[Rcpp::export]]
List Individual_Score_Test(arma::mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::vec residuals)
{
	int i;
	
	// number of markers	
	int p = G.n_cols;
	int n = G.n_rows;

	// Uscore
	arma::rowvec Uscore = trans(residuals)*G;
	// log(p-value)
	arma::vec pvalue_log;
	pvalue_log.zeros(p);
	
	// SE of Uscore
	arma::vec Uscore_se;
	Uscore_se.zeros(p);
	// Effect size estimation
	arma::vec Est;
	Est.zeros(p);
	// SE of Effect size estimation
	arma::vec Est_se;
	Est_se.zeros(p);
	
	double test_stat = 0;
	
	int q = Sigma_iX.n_cols;
	
	arma::mat tSigma_iX_G;
	tSigma_iX_G.zeros(q,p);

	arma::mat Cov;
	Cov.zeros(p,p);
	
	tSigma_iX_G = trans(Sigma_iX)*G;
	Cov = (trans(G)*Sigma_i)*G - trans(tSigma_iX_G)*cov*tSigma_iX_G;

	for(i = 0; i < p; i++)
	{
		if (Cov(i , i) == 0)
		{
			pvalue_log(i) = 0;
			Uscore_se(i) = 0;
			Est(i) = 0;
			Est_se(i) = 0;
		}
		else
		{
			test_stat = pow(Uscore(i),2)/Cov(i,i);
			pvalue_log(i) = -R::pchisq(test_stat,1,false,true);
			
			Uscore_se(i) = sqrt(Cov(i,i));
			Est(i) = Uscore(i)/Cov(i,i);
			Est_se(i) = 1/Uscore_se(i);
		}
		
	}

	return List::create(Named("Score") = trans(Uscore), Named("Score_se") = Uscore_se, Named("pvalue_log") = pvalue_log, Named("Est") = Est, Named("Est_se") = Est_se);
}















