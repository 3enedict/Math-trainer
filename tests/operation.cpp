#include <cppunit/TestAssert.h>
#include <cppunit/extensions/HelperMacros.h>

#include "../src/math.h"
#include "unitmath.h"

using namespace std;

/* Test that the operation is generated correctly */
void UnitMath::UnitMath_7() {
  Math math;

  char *argv[] = {(char *)"./test", (char *)"100", NULL};
  math.maximum(2, argv);

  math.operation();
  char sign_char[4] = {'+', '-', 'x', '/'};
  string test = to_string(math.get_term1()) + " " + sign_char[math.get_sign()] + " " + to_string(math.get_term2()) + " = ";
  CPPUNIT_ASSERT(test == math.get_op());
}
