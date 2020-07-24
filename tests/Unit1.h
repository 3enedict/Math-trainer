#pragma once

#include <cppunit/extensions/HelperMacros.h>

class Unit1 : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(Unit1);
  CPPUNIT_TEST(TestUnit1);
  CPPUNIT_TEST_SUITE_END();

  public:
  void TestUnit1();
};
