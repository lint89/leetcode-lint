// Source : https://leetcode.com/problems/merge-sorted-array/
// Author : LinTao
// Date   : 2016-06-05

// ****************************************************************
// 
// Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

// Note:
// You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; ++i) {
        }
        sort(nums1.begin(), nums1.end());
    }
};


int main()
{
    int nums1arr[] = {1, 3, 5, 7, 9};
    vector<int> nums1;
    for (int i = 0; i < sizeof(nums1arr) / sizeof(nums1arr[0]); ++i)
        nums1.push_back(nums1arr[i]);

    int nums2arr[] = {2, 4, 6, 8};
    vector<int> nums2;
    for (int i = 0; i < sizeof(nums2arr) / sizeof(nums2arr[0]); ++i)
        nums2.push_back(nums2arr[i]);
    
    Solution s;
    s.merge(nums1, nums1.size(), nums2, nums2.size());

    for (auto item : nums1)
        cout << item << " ";
    cout << endl;

	system("pause");
	return 0;
}