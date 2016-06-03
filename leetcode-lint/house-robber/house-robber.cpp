// Source : https://leetcode.com/problems/house-robber/
// Author : LinTao
// Date   : 2016-06-03

// ****************************************************************
// 
// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.
//
// ****************************************************************

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    int rob(vector<int>& nums) {
        // sum = max(不偷， 偷)
        // dp[i] = max(dp[i-1], dp[i-2] + nums[i])
        int len = nums.size();
        if (len == 0) return 0;
        vector<int> dp(len, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        dp[2] = max(nums[1], nums[0] + nums[2]);
        for (int i = 3; i < len; ++i) 
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);

        return dp[len - 1];
    }
};


int main()
{
    int array[] = {1, 2, 1, 1, 5};
    int size = sizeof(array) / sizeof(array[0]);
    vector<int> nums;
    for (int i = 0; i < size; ++i)
        nums.push_back(array[i]);

    Solution s;
	cout << s.rob(nums) << endl;

	system("pause");
	return 0;
}