// Source : https://leetcode.com/problems/power-of-two/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Given an integer, write a function to determine if it is a power of two.
//
// ****************************************************************

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    bool isPowerOfTwo(int n) {
		// return n > 0 ? (1073741824 % n == 0) : false;

        // n 中只有一个1 
		if (n < 1) return false;
		int ret = 0;
		for (int i = 0; i < sizeof(int) * 8; ++i) {
			if (n >> i & 1) ++ret;
		}

		if (ret == 1) return true;
		else return false;
    }
};


int main()
{
	int n = 8;

	Solution s;
	cout << s.isPowerOfTwo(n) << endl;

	system("pause");
	return 0;
}