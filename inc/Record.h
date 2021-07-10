#ifndef __RECORD_H__
#define __RECORD_H__

#include <string>//string
#include <vector>//vector

using namespace std;

class Record
{
public:
	Record(const string& line);
	~Record();

	int getId() const;
	double getDeposit() const; 
	int getYear() const;
	int getMonth() const;

private:
	vector<string> elements;
};

#endif// __RECORD_H__
