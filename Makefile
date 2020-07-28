CXX = g++
CPPFLAGS = -Wall -g -std=c++11

MainSrc = src/main.cpp
MathSrc = src/math.cpp
UnitsSrc = tests/main.cpp tests/maximum.cpp tests/operation.cpp tests/result.cpp tests/verify.cpp

UnitsDeps = tests/generator.h

MainObj = src/main.o
MathObj = src/math.o
TestsObj = tests/main.o tests/maximum.o tests/operation.o tests/result.o tests/verify.o

all: math

math: $(MainObj) $(MathObj)
	$(CXX) $(CPPFLAGS) -o math $(MainSrc) $(MathSrc)

test: $(TestsObj) $(MainObj) $(MathObj)
	$(CXX) $(CPPFLAGS) -o test $(UnitsSrc) $(MathSrc) -lcppunit

clean:
	rm -f $(MainObj) $(MathObj) $(TestsObj) math test
