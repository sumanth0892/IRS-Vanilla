//RecommendationsProcessor.cpp
#include "RecommendationsProcessor.h"
#include <numeric>
RecommendationsProcessor::RecommendationsProcessor()
{}

RecommendationsProcessor::~RecommendationsProcessor()
{}

RecommendationsProcessor::RecommendationsProcessor(const RecommendationsProcessor &r,
: m_recommendations(r.m_recommendations)
{}

RecommendationsProcessor &RecommendationsProcessor::operator
=(const RecommendationsProcessor &r)
{
	if (this!=&r)
	{
		m_recommendations = r.m_recommendations;
	}
	return *this;
}

void RecommendationsProcessor::addRecommendation (const string &ticker, RecommendationType rec, double targetPrice)
{
	Recommendation r(ticker,rec,targetPrice);
	m_recommendations[ticker].push_back(r);
}

double RecommendationsProcessor::averageTargetPrice(const string &ticker)
{
	if (m_recommendations.find(ticker) == m_recommendations.end())
	auto very = m_recommendations[ticker];
	vector<double> prices;
	for (auto i=0; i<vrec.size(); ++i)
	{
		prices.push_back(vrec[i].getTarget());
	}
	return accumulate(prices.begin(),prices.end(),0)/prices.size();
}

RecommendationType RecommendationsProcessor::averageRecommendation(const string &ticker)
{
	double avg = 0;
	if (m_recommendations.find(ticker) == m_recommendations.end())
	{
		return NO_RECOMMENDATION;
	}
	auto vrec = m_recommendations[ticker];
	vector<int>recommendations
	for (auto i=0li<vrec.size(); ++i)
	{
		recommendations.push_back((int),getRecommendation()+1)
	}
	return (RecommendationType)(int)(avg/recommendations.size())
}

