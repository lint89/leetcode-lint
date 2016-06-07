// Source : https://leetcode.com/problems/reverse-bits/
// Author : LinTao
// Date   : 2016-06-07

// ****************************************************************
// 
// Reverse bits of a given 32 bits unsigned integer.

// For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).

// Follow up:
// If this function is called many times, how would you optimize it?

// Related problem: Reverse Integer
//
// ****************************************************************

#include <iostream>
#include <string>
#include <cstdint>


using namespace std;


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t sum = 0;
        for (int i = 0; i < sizeof(uint32_t) * 8; ++i) {
            if ((n << i) & 0x80000000)
                sum += (1 << i);
        }
        return sum;
    }
};


int main()
{
    uint32_t n = 43261596;
    
    Solution s;
    cout << s.reverseBits(n) << endl;
	system("pause");
	return 0;
}