CPP=g++ —std=c++11 -Wall	


test : point.o test.o
	$(CPP) -o test point.o test.o

point.o : point.cpp
	$(CPP) -o point.o -c point.cpp

test.o : test.c point.hpp
	$(CPP) -o test.o -c test.cpp	

calcul :   calculmental

calculmental : calculmental.o
	$(CPP) -o calculmental calculmental.o

calculmental.o : calculmental.cpp
	$(CPP) -c calculmental.cpp

clean :
	rm *.o
