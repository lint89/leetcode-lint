// Source : https://leetcode.com/problems/climbing-stairs/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// You are climbing a stair case. It takes n steps to reach to the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
//
// ****************************************************************

#include <iostream>


using namespace std;


class Solution {
public:
    int climbStairs(int n) {
		// f(n-1)到f(n)只有一种方式，f(n-2)到f(n)有两种方式，但其中单步方式等于f(n-1)
		// f(n) = f(n-1) + f(n-2);
		int *fn = new int[n];
		fn[0] = 1; fn[1] = 2;
		for (int i = 2; i < n; ++i)
			fn[i] = fn[i - 1] + fn[i - 2];

		return fn[n - 1];
    }
};


int main()
{


	system("pause");
	return 0;
}