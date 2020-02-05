#include "../vendor/ceedling/vendor/unity/src/unity.h"

#include "../include/myLibrary.h"

void setUp(void) {}

void tearDown(void) {}

void test_sum() {
  int a = 10,
    b = 20,
    expected = a + b;

  TEST_ASSERT_EQUAL(expected, sum(a, b));
  TEST_ASSERT_EQUAL(60, sum(a, b));
}

