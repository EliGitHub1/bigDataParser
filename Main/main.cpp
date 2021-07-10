#include "Controller.h"

#define FILE_ARG 1

int main(int argc,char* argv[])
{	
	Aggregator aggregator;
		
	Controller controller(argv[FILE_ARG], &aggregator);

	try
	{	
		controller.loadFile();
	//catch logic_error and runtime_error
	}
	catch(exception& e)
	{
		exit(1);		
	}
	
	try
	{
		controller.readFile();
	}
	catch(exception& e)
	{
		exit(1);		
	}
	
	controller.printDepositPerIdPerYear(&aggregator);
	controller.printDepositPerMonthPerYear(&aggregator);
	
	return 0;
}
