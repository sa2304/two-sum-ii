//
// Created by Антон Шмидт on 15.12.2021.
//

#include "solution.h"

#include <algorithm>

using namespace std;

vector<int> Solution::twoSum(vector<int> &numbers, int target) {
  vector<int> complements = numbers;
  for (auto &c: complements) {
    c = target - c;
  }
  reverse(complements.begin(), complements.end());

  for (int i = 0; i < numbers.size(); ++i) {
    const int lhs = numbers[i];
    auto iter = lower_bound(complements.begin(), complements.end(), lhs);
    if (complements.end() != iter) {
      const int j = ReversedIndex(distance(complements.begin(), iter), complements.size());
      if (j != i && *iter == lhs) {
        return (i < j) ? vector<int>{i + 1, j + 1} : vector<int>{j + 1, i + 1};
      }
    }
  }

  return {};
}

int ReversedIndex(int index, int size) {
  return size - 1 - index;
}
