
#include <iostream>//cout
#include <fstream>//ifstream
#include <string>//string

#include "Printer.h"
#include "Aggregator.h"

using namespace std;

Printer::Printer(const string& inputFileName)
:fileName(inputFileName)
{}

Printer::~Printer()
{}

void Printer::printDepositPerIdPerYear(Aggregator* aggregator) const
{	
	printMapOfMap(aggregator->getDepositPerIdPerYear());	
}

void Printer::printDepositPerMonthPerYear(Aggregator* aggregator) const
{	
	printMapOfMap(aggregator->getDepositPerMonthPerYear());	
}

void Printer::printMapOfMap(map<int,map<int,double>> mapOfMap) const
{
	for (map <int, map<int, double>>::iterator it = mapOfMap.begin(); it != mapOfMap.end(); ++it)
	{
		cout << it->first << " : ";
		map<int, double> internalMap = it->second;
		for (map<int, double>::iterator it2 = internalMap.begin(); it2 != internalMap.end(); ++it2)
		{
			if (it2 != internalMap.begin())
			{
				cout << ",";
			}
			cout << it2->first << ":" << it2->second;
		}
		cout << endl;
	}
}
