// Source : https://leetcode.com/problems/number-of-1-bits/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).

// For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3.
//
// ****************************************************************

#include <iostream>
#include <cstdint>


using namespace std;


class Solution {
public:
    int hammingWeight(uint32_t n) {
		int result = 0;
		for (int i = 0; i < sizeof(uint32_t) * 8; ++i) {
			if ((n >> i) & 1)	
				result++;
		}
		return result;
    }
};


int main()
{
	uint32_t n = 11;

	Solution s;
	cout << s.hammingWeight(n) << endl;

	system("pause");
	return 0;
}