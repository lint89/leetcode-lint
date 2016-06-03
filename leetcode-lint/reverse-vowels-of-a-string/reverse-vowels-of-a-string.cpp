// Source : https://leetcode.com/problems/reverse-vowels-of-a-string/
// Author : LinTao
// Date   : 2016-06-03

// ****************************************************************
// 
// Write a function that takes a string as input and reverse only the vowels of a string.

// Example 1:
// Given s = "hello", return "holle".

// Example 2:
// Given s = "leetcode", return "leotcede".
//
// ****************************************************************

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    string reverseVowels(string s) {
        vector<int> pos;
        vector<char> alphbat;

		string vowels = "aAeEiIoOuU";

		for (int i = 0; i < s.size(); ++i) {
			if (vowels.find(s[i]) != string::npos) {
					pos.push_back(i);
					alphbat.push_back(s[i]);
			}
		}

		int len = pos.size();
		for (int i = 0; i < len; ++i) {
			s[pos[i]] = alphbat[len - i - 1];
		}

		return s;
    }
};


int main()
{
	string str = "hello";

	Solution s;
	cout << s.reverseVowels(str) << endl;

	system("pause");
	return 0;
}