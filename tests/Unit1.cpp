#include <cppunit/extensions/HelperMacros.h>
#include "../src/math.h"
#include "Unit1.h"

void Unit1::TestUnit1() {
  CPPUNIT_ASSERT_EQUAL(math(), 2);
  CPPUNIT_ASSERT_EQUAL(math(), 1);
  CPPUNIT_ASSERT_EQUAL(math(), 0);
}
