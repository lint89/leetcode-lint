// Source : https://leetcode.com/problems/valid-anagram/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Given two strings s and t, write a function to determine if t is an anagram of s.

// For example,
// s = "anagram", t = "nagaram", return true.
// s = "rat", t = "car", return false.

// Note:
// You may assume the string contains only lowercase alphabets.

// Follow up:
// What if the inputs contain unicode characters? How would you adapt your solution to such case?
//
// ****************************************************************

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(), s.end());
       sort(t.begin(), t.end());

	   if (s == t) 
		   return true;
	   else 
		   return false;
    }
};


int main()
{
	string s = "anagram";
	string t = "nagaram";

	Solution solution;
	cout << solution.isAnagram(s, t) << endl;

	system("pause");
	return 0;
}