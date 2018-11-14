CPP=g++ --std=c++11 -Wall

all : calculMental

calculMental : calculMental.o
	$(CPP) -o calculMental calculMental.o
calculMental.o : calculMental.cpp
	$(CPP) -c calculMental.cpp
clean :
	rm *.o
