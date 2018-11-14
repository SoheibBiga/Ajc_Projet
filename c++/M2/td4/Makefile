CXX = g++
SRC = $(wildcard *.cc)
OBJ = $(patsubst %.cc,%.o,$(SRC))
EXE = main

#.SILENT
#.PHONY : all

all	: $(EXE)

$(EXE)	: $(OBJ)
	$(CXX) -o $@ $^

Student.o : student.h student.cc
Class.o : student.h class.h class.cc
io.o : student.h class.h io.h io.cc

clean 	:
	rm -f $(OBJ)
