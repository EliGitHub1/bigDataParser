#include <string>//string, c_str
#include <fstream>//ifstream
#include <iostream>//cout

#include "FileReader.h"
#include "Record.h"

using namespace std;

FileReader::FileReader(const string& inputFileName, Aggregator* inputAggregator)
: fileName(inputFileName),
	aggregator(inputAggregator)
{}

FileReader::~FileReader()
{}

void FileReader::readFile() 
{	
	string line;
	ifstream file(fileName.c_str());
	size_t	lineCounter = 0;

	while (getline(file,line))
	{
		Record	tempRecord(line);
		lineCounter++;
		if ( !line.empty() &&
				tempRecord.getYear() > 0 &&
				tempRecord.getId() > 0  &&
				tempRecord.getMonth() > 0 &&
				tempRecord.getDeposit() > 0)
		{
			aggregator->fillDataStracture(tempRecord.getYear(),tempRecord.getId(), tempRecord.getMonth(),tempRecord.getDeposit());	
		}
		else
		{
			cout<<"Record number "<< lineCounter<<" is not valid and wasn't calculated"<<endl;
		}
	}
	if (lineCounter == 0)
	{
		throw logic_error("File is Empty");
	}
}






