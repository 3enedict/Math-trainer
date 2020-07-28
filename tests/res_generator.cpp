#include <cppunit/TestAssert.h>
#include <cppunit/extensions/HelperMacros.h>

#include "../src/math.h"
#include "generator.h"

using namespace std;

/* Test that the operation is generated correctly */

void UnitGenerator::UnitGenerator_8() {
  Generator gen;

  gen.set_op("", 0, 5, 23);

  CPPUNIT_ASSERT_EQUAL(gen.result()[0], 28);
}


void UnitGenerator::UnitGenerator_9() {
  Generator gen;

  gen.set_op("", 1, 45, 23);

  CPPUNIT_ASSERT_EQUAL(gen.result()[0], 22);
}


void UnitGenerator::UnitGenerator_10() {
  Generator gen;

  gen.set_op("", 2, 5, 23);

  CPPUNIT_ASSERT_EQUAL(gen.result()[0], 115);
}


void UnitGenerator::UnitGenerator_11() {
  Generator gen;

  gen.set_op("", 3, 24, 48);

  CPPUNIT_ASSERT_EQUAL(gen.result()[0], 1);
}

void UnitGenerator::UnitGenerator_12() {
  Generator gen;

  gen.set_op("", 3, 24, 48);

  CPPUNIT_ASSERT_EQUAL(gen.result()[1], 2);
}
