// Source : https://leetcode.com/problems/implement-strstr/
// Author : LinTao
// Date   : 2016-06-08

// ****************************************************************
// 
// Implement strStr().

// Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
//
// ****************************************************************

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystackLen = haystack.size();
        int needleLen = needle.size();
        if (haystackLen < needleLen) return -1;
        if (haystackLen == 0 && needleLen == 0) return 0;

        for (int i = 0; i < haystackLen; ++i) {
            if (haystackLen - i < needleLen) return -1;
            int j = 0;
            for (j = 0; j < needleLen; ++j) {
                if (haystack[i + j] != needle[j])
                    break;
            }
            if (j == needleLen)
                return i;
        }

        return -1;
    }
};


int main()
{
    string a = "lintao";
    string b = "int";

    Solution s;
    cout << s.strStr(a, b) << endl;
    

	system("pause");
	return 0;
}