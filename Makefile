CXX = g++
CPPFLAGS = -Wall -g

MainSrc = src/main.cpp
MathSrc = src/math.cpp
UnitsSrc = tests/main.cpp tests/Unit1.cpp

UnitsDeps = tests/Unit1.h

MainObj = src/main.o
MathObj = src/math.o
TestsObj = tests/main.o tests/Unit1.o

all: math

math: $(MainObj) $(MathObj)
	$(CXX) -o math $(MainSrc) $(MathSrc)

test: $(TestsObj) $(MainObj) $(MathObj)
	$(CXX) -o test $(UnitsSrc) $(MathSrc) -lcppunit

clean:
	rm -f $(MainObj) $(MathObj) $(TestsObj) math test
