// Source : https://leetcode.com/problems/maximum-product-of-word-lengths/
// Author : LinTao
// Date   : 2016-07-07

// ****************************************************************
// 
// Given a string array words, find the maximum value of length(word[i]) * length(word[j]) where the two words do not share common letters. You may assume that each word will contain only lower case letters. If no such two words exist, return 0.

// Example 1:
// Given ["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]
// Return 16
// The two words can be "abcw", "xtfn".

// Example 2:
// Given ["a", "ab", "abc", "d", "cd", "bcd", "abcd"]
// Return 4
// The two words can be "ab", "cd".

// Example 3:
// Given ["a", "aa", "aaa", "aaaa"]
// Return 0
// No such pair of words.
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Solution {
public:
    int maxProduct(vector<string>& words) {

        
    }
};


int main()
{
    vector<string> vecStr;
    string strArr[] = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    for (int i = 0; i < sizeof(strArr) / sizeof(strArr[0]); ++i) {
        vecStr.push_back(strArr[i]);
    }

    Solution s;
    cout << s.maxProduct(vecStr) << endl;

	system("pause");
	return 0;
}