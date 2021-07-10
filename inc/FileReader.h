#ifndef __FILEREADER_H__
#define __FILEREADER_H__

#include "Aggregator.h"

#include <string>//string

using namespace std;

class	FileReader
{
public:
	FileReader(const string& fileName, Aggregator* aggregator);
	~FileReader();

	void readFile();
private:
	const string fileName;
	Aggregator* aggregator;
};

#endif //__FILEREADER_H__

