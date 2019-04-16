//Random.cpp 
//To compute Gaussian derivatives

#include "Random.h"
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

double SampleBoxMuller()
{
	double result,x,y;
	double xysquare;
	do
	{
		x = 2.0*rand()/static_cast<double>(RAND_MAX)-1;
		y = 2.0*rand()/static_cast<double>(RAND_MAX)-1;
		xyaquare = x*x + y*y;
	}
	while (xyaquare>=1.0);
	result = x*sqrt(-2*log(xysquare)/xysquare);
	return result;
}
