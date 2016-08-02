// Source : https://leetcode.com/problems/counting-bits/
// Author : LinTao
// Date   : 2016-07-06

// ****************************************************************
// 
// Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

// Example:
// For num = 5 you should return [0,1,1,2,1,2].

// Follow up:

// It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
// Space complexity should be O(n).
// Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.
// Hint:

// You should make use of what you have produced already.
// Divide the numbers in ranges like [2-3], [4-7], [8-15] and so on. And try to generate new range from previous.
// Or does the odd/even status of the number help you in calculating the number of 1s?
//
// ****************************************************************

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;

        for (int i = 0; i <= num; ++i) {
            result.push_back(countBits1(i));
        }

        return result;
    }

    int countBits1(int num) {
        int count = 0;
        while (num != 0) {
            ++count;
            num = num & (num - 1);
        }
        return count;
    }
    
};


int main()
{
    int num;
    cin >> num;

    Solution s;

    vector<int> result = s.countBits(num);
    for (auto item : result) {
        cout << item;
    }
    cout << endl;

	system("pause");
	return 0;
}