#include <fstream>//open, c_str(),close,is_open,peek
#include<iostream>//cerr

#include "FileLoader.h"

using namespace std;

FileLoader::FileLoader(const string& inputFileName)
:	fileName(inputFileName),
	file(fileName.c_str())
{}

FileLoader::~FileLoader()
{
	file.close();
  //C++11 destructors default to noexcept
	if (file.is_open())
	{
		cerr<<"Program terminated without closing file"<<endl;
	}
}

void FileLoader::loadFile() 
{	 	
	file.open(fileName.c_str());

	if (!file.is_open())
	{
		throw runtime_error("File can't open");		
	}
}
