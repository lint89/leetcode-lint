// Source : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Author : LinTao
// Date   : 2016-06-02

// ****************************************************************
// 
// Say you have an array for which the ith element is the price of a given stock on day i.

// If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.
//
// ****************************************************************

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, sell = 0;
		int max_profit = 0, curr_profit = 0;

		for (int i = 0; i < prices.size(); ++i) {
			sell = i;
			curr_profit = prices[sell] - prices[buy];

			if (curr_profit <= 0)
				buy = i;

			if (curr_profit > max_profit)
				max_profit = curr_profit;
		}

		return max_profit;
    }
};


int main()
{
	system("pause");
	return 0;
}