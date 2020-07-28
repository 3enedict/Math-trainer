#include <cppunit/TestAssert.h>
#include <cppunit/extensions/HelperMacros.h>

#include "../src/math.h"
#include "generator.h"

using namespace std;

/* Test that the operation is generated correctly */

void UnitGenerator::UnitGenerator_7() {
  Generator gen;

  char *argv[] = {(char *)"./test", (char *)"100", NULL};
  gen.maximum(2, argv);

  gen.operation();
  char sign_char[4] = {'+', '-', 'x', '/'};
  string test = to_string(gen.get_term1()) + " " + sign_char[gen.get_sign()] + " " + to_string(gen.get_term2()) + " = ";
  CPPUNIT_ASSERT(test == gen.get_op());
}
