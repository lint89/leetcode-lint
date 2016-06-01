// Source : https://leetcode.com/problems/move-zeroes/
// Author : LinTao
// Date   : 2016-5-31

// ****************************************************************
// 
// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

// Note:
// You must do this in-place without making a copy of the array.
// Minimize the total number of operations.
//
// ****************************************************************

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;	// i记录查询未知，j记录非零数填入的位置
		for (; i < nums.size(); ++i) {
			if (nums[i] != 0) {
				nums[j] = nums[i];
				++j;
			}
		}
		for (; j < nums.size(); ++j)	// 剩余位置填入0
			nums[j] = 0;
    }
};


int main()
{
	vector<int> nums1;
	nums1.push_back(0);
	nums1.push_back(1);
	nums1.push_back(0);
	nums1.push_back(3);
	nums1.push_back(12);

	Solution s;
	s.moveZeroes(nums1);
	for (auto i : nums1)
		cout << i << " ";

	cout << endl;

	system("pause");
	return 0;
}