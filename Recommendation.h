//Use vectors to store recommendations for a particular stock
//Recommendation.h
#include <iostream>
using namespace std;

#ifndef __FinancialSamples__Recommendation
#define __FinancialSamples__Recommendation

#include <string>

enum RecommendationType {
	BUY,SELL,HOLD,NO_RECOMMENDATION
};

class Recommendation {
	public:
		Recommendation();
		Recommendation(const string &ticker, RecommendationType rec, double target);
		~Recommendation();
		Recommendation(const Recommendation &r);
		Recommendation &operator =(const Recommendation &r);
		
		double getTarget() const;
		RecommendationType getRecommendation() const;
		string getTicker() const;
	
	private:
		string m_ticker;
		RecommendationType m_recType;
		double m_target;
};

#endif
