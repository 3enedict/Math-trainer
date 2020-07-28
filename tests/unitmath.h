#pragma once

#include <cppunit/extensions/HelperMacros.h>

class UnitMath : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(UnitMath);
  CPPUNIT_TEST(UnitMath_1);
  CPPUNIT_TEST(UnitMath_2);
  CPPUNIT_TEST(UnitMath_3);
  CPPUNIT_TEST(UnitMath_4);
  CPPUNIT_TEST(UnitMath_5);
  CPPUNIT_TEST(UnitMath_6);

  CPPUNIT_TEST(UnitMath_7);

  CPPUNIT_TEST(UnitMath_8);
  CPPUNIT_TEST(UnitMath_9);
  CPPUNIT_TEST(UnitMath_10);
  CPPUNIT_TEST(UnitMath_11);
  CPPUNIT_TEST(UnitMath_12);

  CPPUNIT_TEST(UnitMath_13);
  CPPUNIT_TEST(UnitMath_14);
  CPPUNIT_TEST(UnitMath_15);
  CPPUNIT_TEST(UnitMath_16);
  CPPUNIT_TEST(UnitMath_17);
  CPPUNIT_TEST(UnitMath_18);
  CPPUNIT_TEST(UnitMath_19);
  CPPUNIT_TEST(UnitMath_20);
  CPPUNIT_TEST(UnitMath_21);
  CPPUNIT_TEST_SUITE_END();

  public:

  /* Test that the maximum is generated correctly */
  void UnitMath_1();
  void UnitMath_2();
  void UnitMath_3();
  void UnitMath_4();
  void UnitMath_5();
  void UnitMath_6();

  /* Test that the operation is generated correctly */
  void UnitMath_7();


  /* Test that the result is generated correctly */
  void UnitMath_8();
  void UnitMath_9();
  void UnitMath_10();
  void UnitMath_11();
  void UnitMath_12();

  /* Test that the verification is done correctly */
  void UnitMath_13();
  void UnitMath_14();
  void UnitMath_15();
  void UnitMath_16();
  void UnitMath_17();
  void UnitMath_18();
  void UnitMath_19();
  void UnitMath_20();
  void UnitMath_21();
};
