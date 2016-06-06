// Source : https://leetcode.com/problems/power-of-four/
// Author : LinTao
// Date   : 2016-06-05

// ****************************************************************
// 
// Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

// Example:
// Given num = 16, return true. Given num = 5, return false.

// Follow up: Could you solve it without loops/recursion?
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <queue>


using namespace std;


class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num <= 0) return false;
        int numOne = 0;
        for (int i = 0; i < sizeof(int) * 8; ++i) {
            if (num >> i & 0x01) {
                if (i % 2 != 0) return false;
                ++numOne;
                if (numOne > 1) return false;
            }
        }
        return true;
    }
};


int main()
{
    int i = 3;

    Solution s;
    cout << s.isPowerOfFour(i) << endl;

	system("pause");
	return 0;
}