// Source : https://leetcode.com/problems/power-of-three/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Given an integer, write a function to determine if it is a power of three.

// Follow up:
// Could you do it without using any loop / recursion?
//
// ****************************************************************

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    bool isPowerOfThree(int n) {
#if 0
		if (n == 0) return false;
        if (n == 1)
			return true;
		else {
			if (n / 3 != (double) n / 3) return false;
			return isPowerOfThree(n/3);
		}

		return false;
#endif
		// 1162261467 = 3^19, the max number that power of 3 in int;
		return n > 0 ? (1162261467 % n == 0) : false;	
    }
};


int main()
{
	int n = 45;

	Solution s;
	cout << s.isPowerOfThree(n) << endl;

	system("pause");
	return 0;
}