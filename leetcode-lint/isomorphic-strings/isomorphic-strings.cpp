// Source : https://leetcode.com/problems/isomorphic-strings/
// Author : LinTao
// Date   : 2016-06-05

// ****************************************************************
// 
// Given two strings s and t, determine if they are isomorphic.

// Two strings are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

// For example,
// Given "egg", "add", return true.

// Given "foo", "bar", return false.

// Given "paper", "title", return true.

// Note:
// You may assume both s and t have the same length.
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int lenS = s.size();
        int lenT = t.size();
        if (lenS != lenT) return false;

    }
};


int main()
{
    string s = "paper";
    string t = "title";

    Solution result;
    cout << result.isIsomorphic(s, t) << endl;

	system("pause");
	return 0;
}