#include <cppunit/TestAssert.h>
#include <cppunit/extensions/HelperMacros.h>

#include "../src/math.h"
#include "unitmath.h"

using namespace std;

/* Addition */
void UnitMath::UnitMath_8() {
  Math math;

  math.set_op("", 0, 5, 23);

  CPPUNIT_ASSERT_EQUAL(math.result()[0], 28);
}

/* Substraction */
void UnitMath::UnitMath_9() {
  Math math;

  math.set_op("", 1, 45, 23);

  CPPUNIT_ASSERT_EQUAL(math.result()[0], 22);
}

/* Multiplication */
void UnitMath::UnitMath_10() {
  Math math;

  math.set_op("", 2, 5, 23);

  CPPUNIT_ASSERT_EQUAL(math.result()[0], 115);
}

/* Division (term1) */
void UnitMath::UnitMath_11() {
  Math math;

  math.set_op("", 3, 24, 48);

  CPPUNIT_ASSERT_EQUAL(math.result()[0], 1);
}

/* Division (term2) */
void UnitMath::UnitMath_12() {
  Math math;

  math.set_op("", 3, 24, 48);

  CPPUNIT_ASSERT_EQUAL(math.result()[1], 2);
}
