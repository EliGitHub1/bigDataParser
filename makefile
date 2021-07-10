#	Makefile for analayzing financial data for banking systems 

CPPFLAGS	= -g -ansi -std=c++11 -Wconversion -pedantic -Wall 	-I	inc/

runProject : 			Printer/Objects/Printer.o	FileReader/Objects/FileReader.o  Controller/Objects/Controller.o   FileLoader/Objects/FileLoader.o   Record/Objects/Record.o Aggregator/Objects/Aggregator.o Main/Objects/main.o	

									g++ -o	runProject	Printer/Objects/Printer.o	FileReader/Objects/FileReader.o  Controller/Objects/Controller.o   FileLoader/Objects/FileLoader.o  Record/Objects/Record.o Aggregator/Objects/Aggregator.o Main/Objects/main.o

runProjectWithArgs :Printer/Objects/Printer.o	FileReader/Objects/FileReader.o  Controller/Objects/Controller.o   FileLoader/Objects/FileLoader.o   Record/Objects/Record.o Aggregator/Objects/Aggregator.o Main/Objects/main.o	

									g++ -o	runProject ${ARGS}	Printer/Objects/Printer.o	FileReader/Objects/FileReader.o  Controller/Objects/Controller.o   FileLoader/Objects/FileLoader.o  Record/Objects/Record.o Aggregator/Objects/Aggregator.o Main/Objects/main.o

Controller/Objects/Controller.o: Controller/Controller.cpp  inc/Printer.h inc/FileReader.h  inc/FileLoader.h inc/Controller.h
	g++ -c $(CPPFLAGS) -o 	Controller/Objects/Controller.o		Controller/Controller.cpp 

Printer/Objects/Printer.o: Printer/Printer.cpp  inc/Printer.h
	g++ -c $(CPPFLAGS) -o 	Printer/Objects/Printer.o		Printer/Printer.cpp 

FileReader/Objects/FileReader.o: FileReader/FileReader.cpp inc/FileReader.h
	g++ -c $(CPPFLAGS) -o FileReader/Objects/FileReader.o FileReader/FileReader.cpp

FileLoader/Objects/FileLoader.o: FileLoader/FileLoader.cpp inc/FileLoader.h
	g++ -c $(CPPFLAGS) -o FileLoader/Objects/FileLoader.o FileLoader/FileLoader.cpp

Record/Objects/Record.o: Record/Record.cpp inc/Record.h
	g++ -c $(CPPFLAGS) -o Record/Objects/Record.o Record/Record.cpp

Aggregator/Objects/Aggregator.o: Aggregator/Aggregator.cpp inc/Aggregator.h
	g++ -c $(CPPFLAGS) -o Aggregator/Objects/Aggregator.o Aggregator/Aggregator.cpp

Main/Objects/main.o: Main/main.cpp inc/Controller.h
	g++ -c $(CPPFLAGS) -o Main/Objects/main.o Main/main.cpp

clean:
		rm 	-f Aggregator/Objects/*.o
		rm 	-f RecordFactory/Objects/*.o
		rm 	-f Record/Objects/*.o
		rm	-f Main/Objects/*.o
		rm	-f Printer/Objects/*.o
		rm	-f FileReader/Objects/*.o
		rm	-f FileLoader/Objects/*.o
		rm	-f Controller/Objects/*.o
		rm	-f runProject

#	Makefile for analayzing financial data for banking systems 
