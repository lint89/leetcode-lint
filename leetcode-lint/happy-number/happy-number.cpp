﻿// Source : https://leetcode.com/problems/happy-number/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Write an algorithm to determine if a number is "happy".

// A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

// Example: 19 is a happy number

// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1
//
// ****************************************************************

#include <iostream>
#include <map>


using namespace std;


class Solution {
public:
    bool isHappy(int n) {
		if (n < 0) return false;

		map<int, bool> m;	// 记录所有中间出现的和，并查找是否重复
		m[n] = true;

		while (n != 1) {
			n = calDigitsSquare(n);

			if (m.find(n) != m.end())
				return false;

			m[n] = true;
		}
		return true;
    }

	int calDigitsSquare(int num) {
		int sum = 0;
		while (num) {
			int digit = num % 10;
			num = num / 10;
			sum += digit * digit;
		}
		return sum;
	}
};


int main()
{
	int n = 7;

	Solution s;
	cout << s.isHappy(n) << endl;

	system("pause");
	return 0;
}