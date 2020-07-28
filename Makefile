CXX = g++
CPPFLAGS = -Wall -g -std=c++11

MainSrc = src/main.cpp
MathSrc = src/math.cpp
UnitsSrc = tests/main.cpp tests/max_generator.cpp tests/op_generator.cpp tests/res_generator.cpp

UnitsDeps = tests/generator.h

MainObj = src/main.o
MathObj = src/math.o
TestsObj = tests/main.o tests/max_generator.o tests/op_generator.o tests/res_generator.o

all: math

math: $(MainObj) $(MathObj)
	$(CXX) $(CPPFLAGS) -o math $(MainSrc) $(MathSrc)

test: $(TestsObj) $(MainObj) $(MathObj)
	$(CXX) $(CPPFLAGS) -o test $(UnitsSrc) $(MathSrc) -lcppunit

clean:
	rm -f $(MainObj) $(MathObj) $(TestsObj) math test
