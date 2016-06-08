// Source : https://leetcode.com/problems/two-sum/
// Author : LinTao
// Date   : 2016-06-08

// ****************************************************************
// 
// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

// You may assume that each input would have exactly one solution.

// Example:
// Given nums = [2, 7, 11, 15], target = 9,

// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].
// UPDATE (2016/2/13):
// The return format had been changed to zero-based indices. Please read the above updated description carefully.
//
// ****************************************************************

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;


class Solution {
public:
#if 0
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
    }
#endif
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            if (m.find(nums[i]) == m.end())
                m[target - nums[i]] = i;
            else {
                result.push_back(m[nums[i]]);
                result.push_back(i);
            }
        }
        return result;
    }
};


int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    
    Solution s;
    s.twoSum(nums, 6);

	system("pause");
	return 0;
}