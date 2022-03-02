#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    auto i1 = unique(nums1.begin(), nums1.end());
    nums1.resize(distance(nums1.begin(), i1));

    sort(nums2.begin(), nums2.end());
    auto i2 = unique(nums2.begin(), nums2.end());
    nums2.resize(distance(nums2.begin(), i2));

    vector<int> result;
    set_intersection(nums1.begin(), nums1.end(),
                     nums2.begin(), nums2.end(),
                     back_inserter(result));

    return result;
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
