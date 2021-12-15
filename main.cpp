#include <cassert>
#include <iostream>

#include "solution.h"

using namespace std;

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
}


int main() {
  TestTwoSum();
  std::cout << "Ok!" << std::endl;
  return 0;
}
