#pragma once

#include <cppunit/extensions/HelperMacros.h>

class UnitGenerator : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(UnitGenerator);
  CPPUNIT_TEST(UnitGenerator_1);
  CPPUNIT_TEST(UnitGenerator_2);
  CPPUNIT_TEST(UnitGenerator_3);
  CPPUNIT_TEST(UnitGenerator_4);
  CPPUNIT_TEST(UnitGenerator_5);
  CPPUNIT_TEST(UnitGenerator_6);
  CPPUNIT_TEST_SUITE_END();

  public:
  /* Test that the maximum is generated correctly */

  void UnitGenerator_1();
  void UnitGenerator_2();
  void UnitGenerator_3();
  void UnitGenerator_4();
  void UnitGenerator_5();
  void UnitGenerator_6();
};
