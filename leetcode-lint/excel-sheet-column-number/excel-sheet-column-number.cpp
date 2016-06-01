// Source : https://leetcode.com/problems/excel-sheet-column-number/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Related to question Excel Sheet Column Title

// Given a column title as appear in an Excel sheet, return its corresponding column number.

// For example:

//     A -> 1
//     B -> 2
//     C -> 3
//     ...
//     Z -> 26
//     AA -> 27
//     AB -> 28 
//
// ****************************************************************

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


class Solution {
public:
    int titleToNumber(string s) {
		int num = 0, power = 1;
		for (auto it = s.rbegin(); it != s.rend(); ++it) {
			num += (*it - 'A' + 1) * power;
			power *= 26;
		}
		return num;
    }
};


int main()
{
	string str = "AB";

	Solution s;
	cout << s.titleToNumber(str) << endl;

	system("pause");
	return 0;
}