// Source : https://leetcode.com/problems/length-of-last-word/
// Author : LinTao
// Date   : 2016-06-06

// ****************************************************************
// 
// Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

// If the last word does not exist, return 0.

// Note: A word is defined as a character sequence consists of non-space characters only.

// For example, 
// Given s = "Hello World",
// return 5.
//
// ****************************************************************

#include <iostream>
#include <string>


using namespace std;


class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = 0;

        int i = s.size() - 1;
        for (; i >= 0; --i) {
            if (s[i] != ' ')
                break;
        }
        for (; i >= 0; --i) {
            if (s[i] != ' ')
                ++size;
            else
                break;
        }
        return size;
    }
};


int main()
{
    //string str = "Hello World";
    string str = "Hello   ";
    
    Solution s;
    cout << s.lengthOfLastWord(str) << endl;
	system("pause");
	return 0;
}