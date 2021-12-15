#include <cassert>
#include <iostream>

#include "solution.h"

using namespace std;

void testReversedIndex() {
  assert(4 == ReversedIndex(0, 5));
  assert(3 == ReversedIndex(1, 5));
  assert(2 == ReversedIndex(2, 5));
}

void TestTwoSum() {
  Solution s;
  {
    vector<int> numbers{2, 7, 11, 15};
    assert((vector<int>{1,2} )== s.twoSum(numbers, 9));
  }
  {
    vector<int> numbers{2,3,4};
    assert((vector<int>{1,3} )== s.twoSum(numbers, 6));
  }
  {
    vector<int> numbers{-1,0};
    assert((vector<int>{1,2}) == s.twoSum(numbers, -1));
  }
  {
    vector<int> numbers{5,25,75};
    assert((vector<int>{2,3}) == s.twoSum(numbers, 100));
  }
}


int main() {
  testReversedIndex();
  TestTwoSum();
  std::cout << "Ok!" << std::endl;
  return 0;
}
