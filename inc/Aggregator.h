#ifndef __AGGREGATOR_H__
#define __AGGREGATOR_H__

#include <map>//map

using namespace std;

class Aggregator
{
public:
	Aggregator();
	~Aggregator();	

	void fillDataStracture(int year,int id,int month,double deposit);	
	inline map<int,map<int, double>> getDepositPerIdPerYear() const {return depositPerIdPerYear;};
	inline map<int,map<int, double>>	getDepositPerMonthPerYear() const {return depositPerMonthPerYear;};

private:
	map<int, map<int,double>> depositPerIdPerYear;
	map<int, map<int,double>> depositPerMonthPerYear;
};

#endif //__AGGREGATOR_H__
