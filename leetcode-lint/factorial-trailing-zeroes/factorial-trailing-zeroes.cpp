// Source : https://leetcode.com/problems/factorial-trailing-zeroes/
// Author : LinTao
// Date   : 2016-06-05

// ****************************************************************
// 
// Given an integer n, return the number of trailing zeroes in n!.

// Note: Your solution should be in logarithmic time complexity.
//
// ****************************************************************

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    int trailingZeroes(int n) {
        
    }
};


int main()
{
    int nums = 5;

    Solution s;
    vector<vector<int>> result =  s.generate(nums);

    for (auto item : result) {
        for (auto i : item)
            cout << i << " ";
        cout << endl;
    }
    cout << endl;

	system("pause");
	return 0;
}