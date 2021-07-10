#ifndef __PRINTER_H__
#define __PRINTER_H__

#include <string>//string

#include "Aggregator.h"

using namespace std;

class Printer
{
public:
	Printer(const string& inputFileName);
	~Printer();
	
	void printDepositPerIdPerYear(Aggregator* inputAggregator) const;
	void printDepositPerMonthPerYear(Aggregator* aggregator) const;

private:
	void printMapOfMap(map<int,map<int,double>> mapOfMap) const;
	const string fileName;
};

#endif//__PRINTER_H__
