// Source : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
// Author : LinTao
// Date   : 2016-07-06

// ****************************************************************
// 
// Say you have an array for which the ith element is the price of a given stock on day i.

// Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
//
// ****************************************************************

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;

    }
};


int main()
{
    vector<int> nums;
    int array[] = {1, 2, 3, 4};
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        nums.push_back(array[i]);
    }

    Solution s;
    cout << s.maxProfit(nums) << endl;

	system("pause");
	return 0;
}