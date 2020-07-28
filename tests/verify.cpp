#include <cppunit/TestAssert.h>
#include <cppunit/extensions/HelperMacros.h>

#include "../src/math.h"
#include "unitmath.h"

using namespace std;

/* Addition (true) */
void UnitMath::UnitMath_13() {
  Math math;

  math.set_op("", 0, 13, 45);
  math.result();
  string test = "58";

  CPPUNIT_ASSERT_EQUAL(math.verify(test), 1);
}

/* Addition (false) */
void UnitMath::UnitMath_14() {
  Math math;

  math.set_op("", 0, 19, 45);
  math.result();
  string test = "58";

  CPPUNIT_ASSERT_EQUAL(math.verify(test), 0);
}

/* Substraction (true) */
void UnitMath::UnitMath_15() {
  Math math;

  math.set_op("", 1, 13, 45);
  math.result();
  string test = "-32";

  CPPUNIT_ASSERT_EQUAL(math.verify(test), 1);
}

/* Substraction (false) */
void UnitMath::UnitMath_16() {
  Math math;

  math.set_op("", 1, 19, 45);
  math.result();
  string test = "-32";

  CPPUNIT_ASSERT_EQUAL(math.verify(test), 0);
}

/* Multiplication (true) */
void UnitMath::UnitMath_17() {
  Math math;

  math.set_op("", 2, 13, 45);
  math.result();
  string test = "585";

  CPPUNIT_ASSERT_EQUAL(math.verify(test), 1);
}

/* Multiplication (false) */
void UnitMath::UnitMath_18() {
  Math math;

  math.set_op("", 2, 19, 45);
  math.result();
  string test = "585";

  CPPUNIT_ASSERT_EQUAL(math.verify(test), 0);
}

/* Divison (true) */
void UnitMath::UnitMath_19() {
  Math math;

  math.set_op("", 3, 20, 45);
  math.result();
  string test = "4/9";

  CPPUNIT_ASSERT_EQUAL(math.verify(test), 1);
}

/* Divison (false) */
void UnitMath::UnitMath_20() {
  Math math;

  math.set_op("", 3, 19, 45);
  math.result();
  string test = "4/9";

  CPPUNIT_ASSERT_EQUAL(math.verify(test), 0);
}

/* Buffer overflow */
void UnitMath::UnitMath_21() {
  Math math;

  math.set_op("", 0, 19, 45);
  math.result();
  string test = "5555555555555555555555555555555555555555555555555";

  CPPUNIT_ASSERT_EQUAL(math.verify(test), 0);
}
