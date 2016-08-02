// Source : https://leetcode.com/problems/single-number/
// Author : LinTao
// Date   : 2016-08-02

// ****************************************************************
// 
// Given an array of integers, every element appears twice except for one. Find that single one.

// Note:
// Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

// Subscribe to see which companies asked this question
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /* a^b^a = b */
        int n = 0;
        for (int i = 0; i < nums.size(); ++i) {
            n = n ^ nums[i];
        }

        return n;
    }
};


int main()
{
    vector<int> nums;
    int array[] = {1, 1, 2, 3, 3, 4, 4};
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        nums.push_back(array[i]);
    }

    Solution s;
    cout << s.singleNumber(nums) << endl;

	system("pause");
	return 0;
}