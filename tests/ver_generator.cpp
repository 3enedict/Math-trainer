#include <cppunit/TestAssert.h>
#include <cppunit/extensions/HelperMacros.h>

#include "../src/math.h"
#include "generator.h"

using namespace std;

void UnitGenerator::UnitGenerator_13() {
  Generator gen;

  gen.set_op("", 0, 13, 45);
  gen.result();
  string test = "58";

  CPPUNIT_ASSERT_EQUAL(gen.verify(test), 1);
}

void UnitGenerator::UnitGenerator_14() {
  Generator gen;

  gen.set_op("", 0, 19, 45);
  gen.result();
  string test = "58";

  CPPUNIT_ASSERT_EQUAL(gen.verify(test), 0);
}

void UnitGenerator::UnitGenerator_15() {
  Generator gen;

  gen.set_op("", 1, 13, 45);
  gen.result();
  string test = "-32";

  CPPUNIT_ASSERT_EQUAL(gen.verify(test), 1);
}

void UnitGenerator::UnitGenerator_16() {
  Generator gen;

  gen.set_op("", 1, 19, 45);
  gen.result();
  string test = "-32";

  CPPUNIT_ASSERT_EQUAL(gen.verify(test), 0);
}

void UnitGenerator::UnitGenerator_17() {
  Generator gen;

  gen.set_op("", 2, 13, 45);
  gen.result();
  string test = "585";

  CPPUNIT_ASSERT_EQUAL(gen.verify(test), 1);
}

void UnitGenerator::UnitGenerator_18() {
  Generator gen;

  gen.set_op("", 2, 19, 45);
  gen.result();
  string test = "585";

  CPPUNIT_ASSERT_EQUAL(gen.verify(test), 0);
}

void UnitGenerator::UnitGenerator_19() {
  Generator gen;

  gen.set_op("", 3, 20, 45);
  gen.result();
  string test = "4/9";

  CPPUNIT_ASSERT_EQUAL(gen.verify(test), 1);
}

void UnitGenerator::UnitGenerator_20() {
  Generator gen;

  gen.set_op("", 3, 19, 45);
  gen.result();
  string test = "4/9";

  CPPUNIT_ASSERT_EQUAL(gen.verify(test), 0);
}
