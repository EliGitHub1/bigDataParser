#include "Record.h"
#include <vector>//begin(),end()
#include <string>//stoi,npos,substr,length,c_str,at,atoi,atof,find,begin(),end()
#include <boost/algorithm/string.hpp>//split

#define ID_SEG 0
#define DEPOSIT_SEG 1
#define YEAR_SEG 2
#define MONTH_SEG 3

using namespace std;

struct wrapInvalidWithZeros
{
  wrapInvalidWithZeros() {}
  void operator()(string& stringElement) 
	{ 
		if (stringElement.find("") != string::npos) 
		{
	  		stringElement.replace(stringElement.begin(),stringElement.end(),"0");
		}	
	}
};

Record::Record(const string& inputLine)
{
	string delimiters(",-");

	boost::split(elements, inputLine, boost::is_any_of(delimiters));
	for_each(elements.begin(),elements.begin(),wrapInvalidWithZeros());
}

Record::~Record()
{}

int Record::getId() const
{
	return	atoi(elements.at(ID_SEG).c_str());
}

double Record::getDeposit() const
{
	return	atof(elements.at(DEPOSIT_SEG).c_str());
}

int Record::getYear() const
{
	return	atoi(elements.at(YEAR_SEG).c_str());
}

int Record::getMonth() const
{
	return	atoi(elements.at(MONTH_SEG).c_str());
}
