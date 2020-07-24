#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include "Unit1.h"

int main() {
  CPPUNIT_TEST_SUITE_REGISTRATION(Unit1);
  CppUnit::Test *suite = CppUnit::TestFactoryRegistry::getRegistry().makeTest();

  CppUnit::TextUi::TestRunner runner;
  runner.addTest(suite);

  bool wasSucessful = runner.run();
  return wasSucessful ? 0 : 1;
}
