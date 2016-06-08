// Source : https://leetcode.com/problems/longest-common-prefix/
// Author : LinTao
// Date   : 2016-06-08

// ****************************************************************
// 
// Write a function to find the longest common prefix string amongst an array of strings.
//
// ****************************************************************

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int len = strs.size();
        if (len == 0) return result;

        string firstStr = strs[0];
        int strLen = firstStr.size();

        for (int j = 0; j < strLen; ++j)
        {
            char c = firstStr[j];
            for (int i = 1; i < len; ++i)
            {
                if (j == strs[i].size() || strs[i][j] != c)
                    return result;
            }
            result.push_back(c);
        }


        return result;
    }
};


int main()
{
    vector<string> strs;
    strs.push_back("lint");
    strs.push_back("lintao");
    strs.push_back("lin");

    Solution s;
    cout << s.longestCommonPrefix(strs) << endl;


	system("pause");
	return 0;
}