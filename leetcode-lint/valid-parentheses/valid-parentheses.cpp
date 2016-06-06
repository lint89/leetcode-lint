// Source : https://leetcode.com/problems/valid-parentheses/
// Author : LinTao
// Date   : 2016-06-06

// ****************************************************************
// 
// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
//
// ****************************************************************

#include <iostream>
#include <stack>


using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        for (int i = 0; i < s.size(); ++i) {
            if (sk.empty()) 
                sk.push(s[i]);
            else {
                if (isMatch(sk.top(), s[i]))
                    sk.pop();
                else 
                    sk.push(s[i]);
            }


        }

        return sk.empty();
    }

    bool isMatch(char c0, char c1) {
        if (c0 == '(' && c1 == ')') return true;
        if (c0 == '{' && c1 == '}') return true;
        if (c0 == '[' && c1 == ']') return true;
        return false;
    }
};


int main()
{
    string str = "()[]{}";
    
    Solution s;
    cout << s.isValid(str) << endl;
	system("pause");
	return 0;
}