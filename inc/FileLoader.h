#ifndef __FILELOADER_H__
#define __FILELOADER_H__

#include <string> //string
#include <fstream>//ifstream(reading only)

using namespace std;

class	FileLoader
{
public:
	FileLoader( const string& inputFileName);
	~FileLoader();
	
	void loadFile();
	void closeFile();
private:
	const string fileName;
	ifstream file;
};

#endif //__FILELOADER_H__

