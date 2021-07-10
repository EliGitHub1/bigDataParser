#include "Aggregator.h"

using namespace std;

Aggregator::Aggregator()
{}

Aggregator::~Aggregator()
{}

void Aggregator::fillDataStracture(int year,int id,int month,double deposit)	
{
		depositPerIdPerYear[year][id] += deposit;
		depositPerMonthPerYear[year][month] += deposit;
}
