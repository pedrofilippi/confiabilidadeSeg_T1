#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, TestSort1);
  RUN_TEST_CASE(Sort, TestSort2);
  RUN_TEST_CASE(Sort, TestSort3);
/*
  RUN_TEST_CASE(Sort, InvalidLengthBelowMin);
  RUN_TEST_CASE(Sort, InvalidLengthAboveMax);

  RUN_TEST_CASE(Sort, ValidLengthAndCountingSort);
  RUN_TEST_CASE(Sort, InvalidTypeForCountingSort);

  RUN_TEST_CASE(Sort, ValidLengthAndRadixSort);
  RUN_TEST_CASE(Sort, ValidLengthAndBubbleSort);
  RUN_TEST_CASE(Sort, ValidLengthAndInsertionSort);
  RUN_TEST_CASE(Sort, ValidLengthAndSelectionSort);
  RUN_TEST_CASE(Sort, ValidLengthAndHeapSort);
  RUN_TEST_CASE(Sort, ValidLengthAndMergeSort);
  RUN_TEST_CASE(Sort, ValidLengthAndQuickSort);

*/
  /*RUN_TEST_CASE(Sort, InvalidAlgorithm);
  
  RUN_TEST_CASE(Sort, CountingSortAlreadySorted);
  RUN_TEST_CASE(Sort, CountingSortReversed);
  RUN_TEST_CASE(Sort, BubbleSortWithDuplicates);
  RUN_TEST_CASE(Sort, QuickSortEdgeCases);
  RUN_TEST_CASE(Sort, MergeSortEmpty);
  RUN_TEST_CASE(Sort, RadixSortLargeNumbers);
  RUN_TEST_CASE(Sort, InvalidTypeForRadixSort);

  RUN_TEST_CASE(Sort, InvalidTypeForBubbleSort);
  RUN_TEST_CASE(Sort, InvalidTypeForInsertionSort);
  RUN_TEST_CASE(Sort, InvalidTypeForSelectionSort);
  RUN_TEST_CASE(Sort, InvalidTypeForHeapSort);
  RUN_TEST_CASE(Sort, InvalidTypeForMergeSort);
  RUN_TEST_CASE(Sort, InvalidTypeForQuickSort);
  RUN_TEST_CASE(Sort, InvalidAlgorithmOutOfSwitch);
*/
  RUN_TEST_CASE(Sort, AllCorrectCounting);
  RUN_TEST_CASE(Sort, BellowLimitCounting);
  RUN_TEST_CASE(Sort,  minLimitCounting);
  RUN_TEST_CASE(Sort, maxLimitCounting);
  RUN_TEST_CASE(Sort, aboveLimitCounting);
  RUN_TEST_CASE(Sort, WrongTypeCounting);
  RUN_TEST_CASE(Sort, WrongLenghtCounting);

  RUN_TEST_CASE(Sort, AllCorrectRadix);
  RUN_TEST_CASE(Sort, BellowLimitRadix);
  RUN_TEST_CASE(Sort,  minLimitRadix);
  RUN_TEST_CASE(Sort, maxLimitRadix);
  RUN_TEST_CASE(Sort, aboveLimitRadix);
  RUN_TEST_CASE(Sort, WrongTypeRadix);
  RUN_TEST_CASE(Sort, WrongLenghtRadix);

  RUN_TEST_CASE(Sort, AllCorrectBubble);
  RUN_TEST_CASE(Sort, BellowLimitBubble);
  RUN_TEST_CASE(Sort,  minLimitBubble);
  RUN_TEST_CASE(Sort, maxLimitBubble);
  RUN_TEST_CASE(Sort, aboveLimitBubble);
  RUN_TEST_CASE(Sort, WrongTypeBubble);
  RUN_TEST_CASE(Sort, WrongLenghtBubble);

  RUN_TEST_CASE(Sort, AllCorrectInsertion);
  RUN_TEST_CASE(Sort, BellowLimitInsertion);
  RUN_TEST_CASE(Sort,  minLimitInsertion);
  RUN_TEST_CASE(Sort, maxLimitInsertion);
  RUN_TEST_CASE(Sort, aboveLimitInsertion);
  RUN_TEST_CASE(Sort, WrongTypeInsertion);
  RUN_TEST_CASE(Sort, WrongLenghtInsertion);

    RUN_TEST_CASE(Sort, AllCorrectSelection);
  RUN_TEST_CASE(Sort, BellowLimitSelection);
  RUN_TEST_CASE(Sort,  minLimitSelection);
  RUN_TEST_CASE(Sort, maxLimitSelection);
  RUN_TEST_CASE(Sort, aboveLimitSelection);
  RUN_TEST_CASE(Sort, WrongTypeSelection);
  RUN_TEST_CASE(Sort, WrongLenghtSelection);

  RUN_TEST_CASE(Sort, AllCorrectHeap);
  RUN_TEST_CASE(Sort, BellowLimitHeap);
  RUN_TEST_CASE(Sort,  minLimitHeap);
  RUN_TEST_CASE(Sort, maxLimitHeap);
  RUN_TEST_CASE(Sort, aboveLimitHeap);
  RUN_TEST_CASE(Sort, WrongTypeHeap);
  RUN_TEST_CASE(Sort, WrongLenghtHeap);

  RUN_TEST_CASE(Sort, AllCorrectMerge);
  RUN_TEST_CASE(Sort, BellowLimitMerge);
  RUN_TEST_CASE(Sort,  minLimitMerge);
  RUN_TEST_CASE(Sort, maxLimitMerge);
  RUN_TEST_CASE(Sort, aboveLimitMerge);
  RUN_TEST_CASE(Sort, WrongTypeMerge);
  RUN_TEST_CASE(Sort, WrongLenghtMerge);

  RUN_TEST_CASE(Sort, AllCorrectQuick);
  RUN_TEST_CASE(Sort, BellowLimitQuick);
  RUN_TEST_CASE(Sort,  minLimitQuick);
  RUN_TEST_CASE(Sort, maxLimitQuick);
  RUN_TEST_CASE(Sort, aboveLimitQuick);
  RUN_TEST_CASE(Sort, WrongTypeQuick);
  RUN_TEST_CASE(Sort, WrongLenghtQuick);
}
