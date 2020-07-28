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

  CPPUNIT_TEST(UnitGenerator_7);

  CPPUNIT_TEST(UnitGenerator_8);
  CPPUNIT_TEST(UnitGenerator_9);
  CPPUNIT_TEST(UnitGenerator_10);
  CPPUNIT_TEST(UnitGenerator_11);
  CPPUNIT_TEST(UnitGenerator_12);
  CPPUNIT_TEST_SUITE_END();

  public:
  /* Test that the maximum is generated correctly */

  void UnitGenerator_1();
  void UnitGenerator_2();
  void UnitGenerator_3();
  void UnitGenerator_4();
  void UnitGenerator_5();
  void UnitGenerator_6();

  /* Test that the operation is generated correctly */

  void UnitGenerator_7();


  /* Test that the result is generated correctly */

  void UnitGenerator_8();
  void UnitGenerator_9();
  void UnitGenerator_10();
  void UnitGenerator_11();
  void UnitGenerator_12();
};
