# bigDataParser


Runs on linux


To Run differant senarios:


makefile	
make commends :	
make ARGS="oneMillionRec.csv"
make ARGS="emptyFiledsRec.csv"
make ARGS="emptyFile.csv"
make ARGS="missingLines.csv"
make ARGS="lockedFile.csv"

run commends :	
time ./runProject oneMillionRec.csv
time ./runProject emptyFiledsRec.csv	
time ./runProject emptyFile.csv	
time ./runProject missingLines.csv	
time ./runProject lockedFile.csv	
