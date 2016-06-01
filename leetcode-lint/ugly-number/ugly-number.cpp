// Source : https://leetcode.com/problems/ugly-number/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Write a program to check whether a given number is an ugly number.

// Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.

// Note that 1 is typically treated as an ugly number.
//
// ****************************************************************

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    bool isUgly(int num) {
		while (true) {
			if ((double)num / 2 - num / 2 == 0) num /= 2;
			else  break;
		}
		while (true) {
			if ((double)num / 3 - num / 3 == 0) num /= 3;
			else  break;
		}
		while (true) {
			if ((double)num / 5 - num / 5 == 0) num /= 5;
			else  break;
		}

		return num == 1;
    }
};


int main()
{
	int n = 14;

	Solution s;
	cout << s.isUgly(n) << endl;

	system("pause");
	return 0;
}