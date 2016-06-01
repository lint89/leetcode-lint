// Source : https://leetcode.com/problems/reverse-string/
// Author : LinTao
// Date   : 2016-5-30

// ****************************************************************
// 
// Write a function that takes a string as input and returns the string reversed.

// Example:
// Given s = "hello", return "olleh".
// 
// ****************************************************************

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
        int len = s.size();
		for (int i = 0; i < len / 2; ++i) {
			char ch = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = ch;
		}
		return s;
    }
};


int main()
{
	string str = "hello";

	Solution s;
	cout << s.reverseString(str) << endl;

	system("pause");
	return 0;
}