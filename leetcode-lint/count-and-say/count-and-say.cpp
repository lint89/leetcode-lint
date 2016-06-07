// Source : https://leetcode.com/problems/count-and-say/
// Author : LinTao
// Date   : 2016-06-07

// ****************************************************************
// 
// The count-and-say sequence is the sequence of integers beginning as follows:
// 1, 11, 21, 1211, 111221, ...

// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.
// Given an integer n, generate the nth sequence.

// Note: The sequence of integers will be represented as a string.
//
// ****************************************************************

#include <iostream>
#include <string>
#include <sstream>


using namespace std;


class Solution {
public:
    string countAndSay(int n) {
        string str = "1";

        while (--n) {
            str = nextCountAndSay(str);
        }

        return str;
    }
    
    string nextCountAndSay(string str) {
        string out;
        for (int i = 0; i < str.size(); ++i) {
            int len = 1;
            if (i != str.size() - 1) {
                while (str[i] == str[i + 1]) {
                    ++len;
                    ++i;
                }
            }
            out.append(Int2String(len));
            out.push_back(str[i]);
            len = 1;
        }
        return out;
    }

    string Int2String(int i) {
        stringstream ss;
        ss << i;
        return ss.str();
    }
};


int main()
{
    int n = 5;
    
    Solution s;
    cout << s.countAndSay(n) << endl;
	system("pause");
	return 0;
}