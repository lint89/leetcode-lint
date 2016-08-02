// Source : https://leetcode.com/problems/missing-number/
// Author : LinTao
// Date   : 2016-07-07

// ****************************************************************
// 
// Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

// For example,
// Given nums = [0, 1, 3] return 2.

// Note:
// Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = (1 + len) * len / 2;
        int sum1 = 0;
        for (auto item : nums) {
            sum1 += item;
        }
        return sum - sum1;
    }
};


int main()
{
    vector<int> nums;
    int arr[] = {0, 1, 3};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        nums.push_back(arr[i]);
    }

    Solution s;
    cout << s.missingNumber(nums) << endl;

	system("pause");
	return 0;
}