#include<iostream>//cerr

#include "Controller.h"

Controller::Controller(const string& inputFileName,Aggregator* aggregator)	
:	fileName(inputFileName), 
	fileLoader(inputFileName),
	fileReader(inputFileName,aggregator),
	printer(inputFileName)
{}

Controller::~Controller()
{}

void Controller::loadFile()
{	
	try
	{
		fileLoader.loadFile();
	}
	catch (const runtime_error& error)
	{
		cerr<<error.what()<<endl;	
		throw;
	}
	catch (const logic_error& error)
	{
		cerr<<error.what()<<endl;
		throw;
	}
}

void Controller::readFile() 
{
	try
	{
		fileReader.readFile();
	}
	catch (const logic_error& error)
	{
		cerr<<error.what()<<endl;
		throw;
	}
}

void Controller::printDepositPerIdPerYear(Aggregator* aggregator) const
{
	printer.printDepositPerIdPerYear(aggregator);
}

void Controller::printDepositPerMonthPerYear(Aggregator* aggregator) const
{
	printer.printDepositPerMonthPerYear(aggregator);
}
