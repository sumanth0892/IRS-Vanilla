//Recommendation.cpp
#include "Recommendation.h"
#include <iostream>
using namespace std;

Recommendation::Recommendation()
: m_recType(HOLD)
  m_target(0)
{}

Recommendation::Recommendation (const string &ticker, RecommendationType rec, double target)
: m_ticker(ticker),
  m_recType(rec),
  m_target(target)
{}

Recommendation::~Recommendation()
{}

Recommendation::Recommendation(const Recommendation &r)
: m_ticker(r.m_ticker),
  m_recType(r.m_recType),
  m_target(r.m_target)
{}

Recommendation &Recommendation::operator = (const Recommendation &r)
{
	if(this!=&r)
	{
		m_ticker = r.m_ticker;
		m_recType = r.m_recType;
		m_target = r.m_target;
	}
	return *this;
}

double Recommendation::getTarget() const
{
	return m_target;
}

RecommendationType Recommendation::getRecommendation() const
{
	return m_recType;
}

string Recommendation::getTicker() const
{
	return m_ticker;
}

