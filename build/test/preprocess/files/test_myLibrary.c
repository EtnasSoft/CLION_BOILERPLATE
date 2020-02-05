#include "build/temp/_test_myLibrary.c"
#include "test/../include/myLibrary.h"
#include "test/../vendor/ceedling/vendor/unity/src/unity.h"




void setUp(void) {}



void tearDown(void) {}



void test_sum() {

  int a = 10,

    b = 20,

    expected = a + b;



  UnityAssertEqualNumber((UNITY_INT)((expected)), (UNITY_INT)((sum(a, b))), (

 ((void *)0)

 ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((60)), (UNITY_INT)((sum(a, b))), (

 ((void *)0)

 ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

}
