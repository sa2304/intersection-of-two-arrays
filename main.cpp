#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    // FIXME
    return {};
  }
};

void TestIntersection() {
  Solution s;
  {
    vector<int> nums1{1, 2, 2, 1};
    vector<int> nums2{2, 2};
    vector<int> result = s.intersection(nums1, nums2);
    vector<int> expected{2};
    assert(expected == result);
  }
  {
    vector<int> nums1{4, 9, 5};
    vector<int> nums2{9, 4, 9, 8, 4};
    vector<int> result = s.intersection(nums1, nums2);
    vector<int> expected{4, 9};
    assert(expected == result);
  }
//  {
//    vector<int> nums1{};
//    vector<int> nums2{};
//    vector<int> result = s.intersection(nums1, nums2);
//    vector<int> expected{};
//    assert(expected == result);
//  }
}

int main() {
  TestIntersection();
  cout << "Ok!" << endl;
  return 0;
}
