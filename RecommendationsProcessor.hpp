//RecommendationsProcessor.h
#include <iostream>
using namespace std;

#ifndef __FinancialSamples__RecommendationsProcessor__
#define __FinancialSamples__RecommendationsProcessor__

#include <map>
#include <vector>
#include "Recommendation.h"

class RecommendationsProcessor {
public:
	RecommendationsProcessor();
	~RecommendationsProcessor();
	RecommendationsProcessor(const RecommendationsProcessor &);
	RecommendationsProcessor &operator = (const RecommendationsProcessor &);
	
	void addRecommendation(const string &ticker, RecommendationType rec, double targetPrice);
	double averageTargetPrice(const string &ticker);
	RecommendationType averageRecommendation(const string &ticker);
private:
	map<string, vector<Recommendation>>m_recommendations;
};

#endif


