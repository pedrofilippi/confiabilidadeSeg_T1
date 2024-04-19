//#include "Sort.h"
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

    char complexity1[] = "On";
    char complexity2[] = "On2";
    char complexity3[] = "Onlogn";

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, TestSort1)
{
  int numeros[5] = {3, 1, 4, 5, 2};
  // All of these should pass
  TEST_ASSERT_EQUAL(0, sort(numeros,5, complexity1,BUBBLE));
  //TEST_ASSERT_EQUAL(-1, Sort(2,2));
}

TEST(Sort, TestSort2)
{
  // This test will fail
  //TEST_ASSERT_EQUAL(2, Sort(1,2));
  // This test will pass
  //TEST_ASSERT_EQUAL(-1, Sort(2,2));
  TEST_ASSERT_EQUAL(-1, -1);
}

TEST(Sort, TestSort3)
{
  // This test will fail
  //TEST_ASSERT_EQUAL(2, Sort(1,2));
  // This test will pass
  TEST_ASSERT_EQUAL(-1, -1);
}

