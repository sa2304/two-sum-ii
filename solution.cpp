//
// Created by Антон Шмидт on 15.12.2021.
//

#include "solution.h"

using namespace std;

/**
 *
 * @param numbers
 * @param target
 * @return
 *
 * Constrains:
 * 2 <= numbers.length <= 3 * 104
 * -1000 <= numbers[i] <= 1000
 * numbers is sorted in non-decreasing order
 * -1000 <= target <= 1000
 */
vector<int> Solution::twoSum(vector<int> &numbers, int target) {
  int size = numbers.size();
  int left = 0;
  int right = size - 1;

  // because numbers are sorted we could solve the problem using two pointers moving towards eachother
  while (left < right) {
    const int sum = numbers[left] + numbers[right];
    if (sum == target) {
      return {left + 1, right + 1};
    } else if (sum < target) ++left; else --right;
  }

  return {};
}

