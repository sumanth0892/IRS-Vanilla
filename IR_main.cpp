//Interest rate derivative with Monte Carlo Simulation
//IR_main.cpp
//Requires the random.cpp and IR_source.cpp files

#include "IR.h"
#include <iostream>
using namespace std;

int main()
{
	cout<<"\n *** START IR1: IRS Monte Carlo Labor Market Model"<<endl;
	//Plain vanilla IRS, pays fixed, receives floating
	//freq payments every 3M, maturity 1 year
	//STEP 1: Input parameters:
	double notional = 1000000;//notional
	double K = 0.04; //fixed rate IRS
	double alpha = 0.25//daycount factor
	double sigma = 0.15// fwd rates volatility
	double dT = 0.25;
	int N = 3; //number of forward rates
	int M = 1000; //number of simulations
	
	//Construct a IR object from the input params
	IR ir1(notional, K, alpha, sigma, dT, N, M);
	//use "get_premium"
	auto results = ir1.get_simulation_data();
	
	//OUTPUT results
	auto sz = results.datapoints.size();
	for (decltype(sz) nsim=0; sim<sz; ++nsim)
	{
		cout<<"simIRS["<<nsim<< "] = "<<
		results.datapoints[nsim]<<endl;
	}
	cout<<"\n *** IRS PV = " <<results.Value<<endl;
	cout<<"\n *** END IR1: IRS Monte Carlo Labor Market MODEL"<<endl;
	return 0;
}
