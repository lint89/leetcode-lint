// Source : https://leetcode.com/problems/single-number-iii/
// Author : LinTao
// Date   : 2016-08-02

// ****************************************************************
// 
// Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

// For example:

// Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].

// Note:
// The order of the result is not important. So in the above example, [5, 3] is also correct.
// Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
    }
};


int main()
{
    vector<int> nums;
    int array[] = {1, 2, 1, 3, 2, 5};
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        nums.push_back(i);
    }

    Solution s;
    vector<int> result;
    result = s.singleNumber(nums);

    for (auto item : result) {
        cout << item;
    }
    cout << endl;

	system("pause");
	return 0;
}