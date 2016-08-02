// Source : https://leetcode.com/problems/integer-break/
// Author : LinTao
// Date   : 2016-07-07

// ****************************************************************
// 
// Given a positive integer n, break it into the sum of at least two positive integers and maximize the product of those integers. Return the maximum product you can get.

// For example, given n = 2, return 1 (2 = 1 + 1); given n = 10, return 36 (10 = 3 + 3 + 4).

// Note: You may assume that n is not less than 2 and not larger than 58.

// Hint:

// 1. There is a simple O(n) solution to this problem.
// 2. You may check the breaking results of n ranging from 7 to 10 to discover the regularities.
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Solution {
public:
    int integerBreak(int n) {
        // n = 2,      1 * 1 = 1;
        // n = 3,      2 * 1 = 2;
        // n = 4,      2 * 2 = 4;
        // n = 5,      2 * 3 = 6;
        // 当n < 4时, 不再拆分

        if (n == 2) return 1;
        if (n == 3) return 2;

        int result = 1;
        while (n > 4) {
            result *= 3;
            n -= 3;
        }
        result *= n;

        return result;
    }
};


int main()
{
    int n = 10;

    Solution s;
    cout << s.integerBreak(n) << endl;

	system("pause");
	return 0;
}