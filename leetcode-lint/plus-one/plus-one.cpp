// Source : https://leetcode.com/problems/plus-one/
// Author : LinTao
// Date   : 2016-06-03

// ****************************************************************
// 
// Given a non-negative number represented as an array of digits, plus one to the number.

// The digits are stored such that the most significant digit is at the head of the list.
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <queue>


using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; --i) {
            digits[i] += 1;
            if (digits[i] == 10) {
                digits[i] = 0;
            } else {
                return digits;
            }
        }
        if (digits[0] == 0) {
            digits[0] = 1;
            digits.push_back(0);
        }

        return digits;
    }
};


int main()
{
    vector<int> digits;
    digits.push_back(1);
    digits.push_back(2);
    digits.push_back(3);

    Solution s;
    
    vector<int> result = s.plusOne(digits);
    for (auto item : result)
        cout << item;
    cout << endl;

	system("pause");
	return 0;
}