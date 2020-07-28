#include <cppunit/TestAssert.h>
#include <cppunit/extensions/HelperMacros.h>

#include "../src/math.h"
#include "unitmath.h"

using namespace std;

/* No arguments */
void UnitMath::UnitMath_1() {
  Math math;
  char *argv[] = {(char *)"./test", NULL};

  math.maximum(1, argv);

  CPPUNIT_ASSERT_EQUAL(100, math.get_max());
}

/* Normal */
void UnitMath::UnitMath_2() {
  Math math;
  char *argv[] = {(char *)"./test", (char *)"7", NULL};

  math.maximum(2, argv);

  CPPUNIT_ASSERT_EQUAL(7, math.get_max());
}

/* "Undersized" numbers */
void UnitMath::UnitMath_3() {
  Math math;
  char *argv[] = {(char *)"./test", (char *)"0", NULL};

  math.maximum(2, argv);

  CPPUNIT_ASSERT_EQUAL(100, math.get_max());
}

/* Oversized numbers */
void UnitMath::UnitMath_4() {
  Math math;
  char *argv[] = {(char *)"./test", (char *)"10001", NULL};

  math.maximum(2, argv);

  CPPUNIT_ASSERT_EQUAL(100, math.get_max());
}

/* Non digit characters */
void UnitMath::UnitMath_5() {
  Math math;
  char *argv[] = {(char *)"./test", (char *)"a", NULL};

  math.maximum(2, argv);

  CPPUNIT_ASSERT_EQUAL(100, math.get_max());
}

/* Buffer overflow */
void UnitMath::UnitMath_6() {
  Math math;
  char *argv[] = {(char *)"./test", (char *)"999999999999", NULL};

  math.maximum(2, argv);

  CPPUNIT_ASSERT_EQUAL(100, math.get_max());
}
