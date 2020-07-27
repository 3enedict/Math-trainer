#include <cppunit/TestAssert.h>
#include <cppunit/extensions/HelperMacros.h>

#include "../src/math.h"
#include "generator.h"

using namespace std;

/* No arguments */
void UnitGenerator::UnitGenerator_1() {
  Generator gen;
  char *argv[] = {(char *)"./test", NULL};

  gen.maximum(1, argv);

  CPPUNIT_ASSERT_EQUAL(100, gen.get_max());
}

/* Normal */
void UnitGenerator::UnitGenerator_2() {
  Generator gen;
  char *argv[] = {(char *)"./test", (char *)"7", NULL};

  gen.maximum(2, argv);

  CPPUNIT_ASSERT_EQUAL(7, gen.get_max());
}

/* "Undersized" numbers */
void UnitGenerator::UnitGenerator_3() {
  Generator gen;
  char *argv[] = {(char *)"./test", (char *)"0", NULL};

  gen.maximum(2, argv);

  CPPUNIT_ASSERT_EQUAL(100, gen.get_max());
}

/* Oversized numbers */
void UnitGenerator::UnitGenerator_4() {
  Generator gen;
  char *argv[] = {(char *)"./test", (char *)"10001", NULL};

  gen.maximum(2, argv);

  CPPUNIT_ASSERT_EQUAL(100, gen.get_max());
}

/* Non digit characters */
void UnitGenerator::UnitGenerator_5() {
  Generator gen;
  char *argv[] = {(char *)"./test", (char *)"a", NULL};

  gen.maximum(2, argv);

  CPPUNIT_ASSERT_EQUAL(100, gen.get_max());
}

/* Buffer overflow */
void UnitGenerator::UnitGenerator_6() {
  Generator gen;
  char *argv[] = {(char *)"./test", (char *)"999999999999", NULL};

  gen.maximum(2, argv);

  CPPUNIT_ASSERT_EQUAL(100, gen.get_max());
}
