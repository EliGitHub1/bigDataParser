#ifndef __CONTROLLERR_H__
#define __CONTROLLERR_H__

#include <string> //string

#include "FileLoader.h"
#include "FileReader.h"
#include "Printer.h"
#include "Aggregator.h"

using namespace std;

class Controller
{
public:
	Controller(const string& inputFileName,Aggregator* aggregator);
	~Controller();

	void loadFile();
	void readFile();
	void printDepositPerIdPerYear(Aggregator* aggregator) const;
	void printDepositPerMonthPerYear(Aggregator* aggregator) const;
private:
	const string fileName;
	FileLoader fileLoader;
	FileReader fileReader;
	Printer printer;
};

#endif //__CONTROLLERR_H__
