//#include "Sort.h"
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

    char complexity1[] = "On";
    char complexity2[] = "On2";
    char complexity3[] = "Onlogn";
    char complexityFail[] = "Abacate";

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}
  
    int expected_bellow[1] = {1};
    int expected_minLimit[2] = {7,15};
    int expected_ok[3] = {0, 1, 5};
    int expected_maxLimit[20] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17,17, 18, 19, 20};
    int expected_above[21] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,21};
    
//counting    

TEST(Sort, AllCorrectCounting) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity1, COUNTING);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_ok, vet_ok, 3);
}

TEST(Sort, BellowLimitCounting) {
    int vet_bellow[1] = {1};
    int status = sort(vet_bellow, 1, complexity1, COUNTING);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, minLimitCounting) {
    int vet_minLimit[2] = {15,7};
    int status = sort(vet_minLimit, 2, complexity1, COUNTING);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_minLimit, vet_minLimit, 2);
}

TEST(Sort, maxLimitCounting) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 20, complexity1, COUNTING);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_maxLimit, vet_maxLimit, 20);
}

TEST(Sort, aboveLimitCounting) {
    int vet_above[21] = {14, 3, 20, 7, 1, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16,21, 13, 9, 18, 15};
    int status = sort(vet_above, 21, complexity1, COUNTING);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, WrongTypeCounting) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity2, COUNTING);
    TEST_ASSERT_EQUAL(1, status);
}


TEST(Sort, WrongLenghtCounting) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int vet_less[20] = {0, 3, 7, 14, 20, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 5, complexity1, COUNTING);

    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(vet_maxLimit, vet_less, 20);
}


// radix

TEST(Sort, AllCorrectRadix) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity1, RADIX);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_ok, vet_ok, 3);
}

TEST(Sort, BellowLimitRadix) {
    int vet_bellow[1] = {1};
    int status = sort(vet_bellow, 1, complexity1, RADIX);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, minLimitRadix) {
    int vet_minLimit[2] = {15,7};
    int status = sort(vet_minLimit, 2, complexity1, RADIX);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_minLimit, vet_minLimit, 2);
}

TEST(Sort, maxLimitRadix) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 20, complexity1, RADIX);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_maxLimit, vet_maxLimit, 20);
}

TEST(Sort, aboveLimitRadix) {
    int vet_above[21] = {14, 3, 20, 7, 1, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16,21, 13, 9, 18, 15};
    int status = sort(vet_above, 21, complexity1, RADIX);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, WrongTypeRadix) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity2, RADIX);
    TEST_ASSERT_EQUAL(1, status);
}


TEST(Sort, WrongLenghtRadix) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int vet_less[20] = {0, 3, 7, 14, 20, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 5, complexity1, RADIX);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(vet_maxLimit, vet_less, 20);
}


//bubble

TEST(Sort, AllCorrectBubble) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity2, BUBBLE);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_ok, vet_ok, 3);
}

TEST(Sort, BellowLimitBubble) {
    int vet_bellow[1] = {1};
    int status = sort(vet_bellow, 1, complexity1, BUBBLE);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, minLimitBubble) {
    int vet_minLimit[2] = {15,7};
    int status = sort(vet_minLimit, 2, complexity2, BUBBLE);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_minLimit, vet_minLimit, 2);
}

TEST(Sort, maxLimitBubble) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 20, complexity2, BUBBLE);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_maxLimit, vet_maxLimit, 20);
}

TEST(Sort, aboveLimitBubble) {
    int vet_above[21] = {14, 3, 20, 7, 1, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16,21, 13, 9, 18, 15};
    int status = sort(vet_above, 21, complexity2, BUBBLE);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, WrongTypeBubble) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity1, BUBBLE);
    TEST_ASSERT_EQUAL(1, status);
}


TEST(Sort, WrongLenghtBubble) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int vet_less[20] = {0, 3, 7, 14, 20, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 5, complexity2, BUBBLE);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(vet_maxLimit, vet_less, 20);
}



//insertion


TEST(Sort, AllCorrectInsertion) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity2, INSERTION);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_ok, vet_ok, 3);
}

TEST(Sort, BellowLimitInsertion) {
    int vet_bellow[1] = {1};
    int status = sort(vet_bellow, 1, complexity1, INSERTION);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, minLimitInsertion) {
    int vet_minLimit[2] = {15,7};
    int status = sort(vet_minLimit, 2, complexity2, INSERTION);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_minLimit, vet_minLimit, 2);
}

TEST(Sort, maxLimitInsertion) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 20, complexity2, INSERTION);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_maxLimit, vet_maxLimit, 20);
}

TEST(Sort, aboveLimitInsertion) {
    int vet_above[21] = {14, 3, 20, 7, 1, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16,21, 13, 9, 18, 15};
    int status = sort(vet_above, 21, complexity2, INSERTION);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, WrongTypeInsertion) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity1, INSERTION);
    TEST_ASSERT_EQUAL(1, status);
}


TEST(Sort, WrongLenghtInsertion) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int vet_less[20] = {0, 3, 7, 14, 20, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 5, complexity2, INSERTION);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(vet_maxLimit, vet_less, 20);
}


//selection

TEST(Sort, AllCorrectSelection) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity2, SELECTION);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_ok, vet_ok, 3);
}

TEST(Sort, BellowLimitSelection) {
    int vet_bellow[1] = {1};
    int status = sort(vet_bellow, 1, complexity1, SELECTION);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, minLimitSelection) {
    int vet_minLimit[2] = {15,7};
    int status = sort(vet_minLimit, 2, complexity2, SELECTION);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_minLimit, vet_minLimit, 2);
}

TEST(Sort, maxLimitSelection) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 20, complexity2, SELECTION);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_maxLimit, vet_maxLimit, 20);
}

TEST(Sort, aboveLimitSelection) {
    int vet_above[21] = {14, 3, 20, 7, 1, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16,21, 13, 9, 18, 15};
    int status = sort(vet_above, 21, complexity2, SELECTION);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, WrongTypeSelection) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity1, SELECTION);
    TEST_ASSERT_EQUAL(1, status);
}


TEST(Sort, WrongLenghtSelection) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int vet_less[20] = {0, 3, 7, 14, 20, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 5, complexity2, SELECTION);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(vet_maxLimit, vet_less, 20);
}

//heap 


TEST(Sort, AllCorrectHeap) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity3, HEAP);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_ok, vet_ok, 3);
}

TEST(Sort, BellowLimitHeap) {
    int vet_bellow[1] = {1};
    int status = sort(vet_bellow, 1, complexity1, HEAP);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, minLimitHeap) {
    int vet_minLimit[2] = {15,7};
    int status = sort(vet_minLimit, 2, complexity3, HEAP);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_minLimit, vet_minLimit, 2);
}

TEST(Sort, maxLimitHeap) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 20, complexity3, HEAP);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_maxLimit, vet_maxLimit, 20);
}

TEST(Sort, aboveLimitHeap) {
    int vet_above[21] = {14, 3, 20, 7, 1, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16,21, 13, 9, 18, 15};
    int status = sort(vet_above, 21, complexity3, HEAP);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, WrongTypeHeap) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity1, HEAP);
    TEST_ASSERT_EQUAL(1, status);
}


TEST(Sort, WrongLenghtHeap) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int vet_less[20] = {0, 3, 7, 14, 20, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 5, complexity3, HEAP);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(vet_maxLimit, vet_less, 20);
}


//merge

TEST(Sort, AllCorrectMerge) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity3, MERGE);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_ok, vet_ok, 3);
}

TEST(Sort, BellowLimitMerge) {
    int vet_bellow[1] = {1};
    int status = sort(vet_bellow, 1, complexity1, MERGE);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, minLimitMerge) {
    int vet_minLimit[2] = {15,7};
    int status = sort(vet_minLimit, 2, complexity3, MERGE);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_minLimit, vet_minLimit, 2);
}

TEST(Sort, maxLimitMerge) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 20, complexity3, MERGE);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_maxLimit, vet_maxLimit, 20);
}

TEST(Sort, aboveLimitMerge) {
    int vet_above[21] = {14, 3, 20, 7, 1, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16,21, 13, 9, 18, 15};
    int status = sort(vet_above, 21, complexity3, MERGE);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, WrongTypeMerge) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity1, MERGE);
    TEST_ASSERT_EQUAL(1, status);
}


TEST(Sort, WrongLenghtMerge) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int vet_less[20] = {0, 3, 7, 14, 20, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 5, complexity3, MERGE);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(vet_maxLimit, vet_less, 20);
}

//quick

TEST(Sort, AllCorrectQuick) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexity3, QUICK);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_ok, vet_ok, 3);
}

TEST(Sort, BellowLimitQuick) {
    int vet_bellow[1] = {1};
    int status = sort(vet_bellow, 1, complexity1, QUICK);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, minLimitQuick) {
    int vet_minLimit[2] = {15,7};
    int status = sort(vet_minLimit, 2, complexity3, QUICK);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_minLimit, vet_minLimit, 2);
}

TEST(Sort, maxLimitQuick) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 20, complexity3, QUICK);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_maxLimit, vet_maxLimit, 20);
}

TEST(Sort, aboveLimitQuick) {
    int vet_above[21] = {14, 3, 20, 7, 1, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16,21, 13, 9, 18, 15};
    int status = sort(vet_above, 21, complexity3, QUICK);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, WrongTypeQuick) {
    int vet_ok[3] = {1,5,0};
    int status = sort(vet_ok, 3, complexityFail, QUICK);
    TEST_ASSERT_EQUAL(1, status);
}


TEST(Sort, WrongLenghtQuick) {
    int vet_maxLimit[20] = {14, 3, 20, 7, 0, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int vet_less[20] = {0, 3, 7, 14, 20, 12, 17, 6, 4, 10, 19, 2, 11, 8, 5, 16, 17, 9, 18, 15};
    int status = sort(vet_maxLimit, 5, complexity3, QUICK);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(vet_maxLimit, vet_less, 20);
}

TEST(Sort, WrongAlgorithm) {
    int vet_maxLimit[5] = {14, 3, 20, 7, 0};
    int status = sort(vet_maxLimit, 5, complexity2, -1);
    TEST_ASSERT_EQUAL(1, status);
}

TEST(Sort, Sorted) {
    int vet_sorted[20] = {0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,18,19};
    int expected_sorted[20] = {0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,18,19};
    
    int status = sort(vet_sorted, 20, complexity1, COUNTING);
    TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_sorted, vet_sorted, 20);
     status = sort(vet_sorted, 20, complexity1, RADIX);
      TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_sorted, vet_sorted, 20);
     status = sort(vet_sorted, 20, complexity2, BUBBLE);
      TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_sorted, vet_sorted, 20);
     status = sort(vet_sorted, 20, complexity2, INSERTION);
      TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_sorted, vet_sorted, 20);
    status = sort(vet_sorted, 20, complexity2, SELECTION);
     TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_sorted, vet_sorted, 20);
     status = sort(vet_sorted, 20, complexity3, HEAP);
      TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_sorted, vet_sorted, 20);
     status = sort(vet_sorted, 20, complexity3, MERGE);
      TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_sorted, vet_sorted, 20);
     status = sort(vet_sorted, 20, complexity3, QUICK);
      TEST_ASSERT_EQUAL(0, status);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_sorted, vet_sorted, 20);

    TEST_ASSERT_EQUAL(0, status);
}