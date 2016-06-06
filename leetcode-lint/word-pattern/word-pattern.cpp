// Source : https://leetcode.com/problems/word-pattern/
// Author : LinTao
// Date   : 2016-06-06

// ****************************************************************
// 
// Given a pattern and a string str, find if str follows the same pattern.

// Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.

// Examples:
// pattern = "abba", str = "dog cat cat dog" should return true.
// pattern = "abba", str = "dog cat cat fish" should return false.
// pattern = "aaaa", str = "dog cat cat dog" should return false.
// pattern = "abba", str = "dog dog dog dog" should return false.
// Notes:
// You may assume pattern contains only lowercase letters, and str contains lowercase letters separated by a single space.

// Credits:
// Special thanks to @minglotus6 for adding this problem and creating all test cases.
//
// ****************************************************************

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>


using namespace std;


class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> strVec = splitString(str);

        int lenStr = strVec.size();
        int lenPat = pattern.size();

        if (lenPat != lenStr) return false;

        unordered_map<string, char> strDict;
        unordered_map<char, string> pattDict;

        for (int i = 0; i < lenStr; ++i) {
            if (strDict.find(strVec[i]) == strDict.end()) {
                strDict[strVec[i]] = pattern[i];
            } 
            if (pattDict.find(pattern[i]) == pattDict.end()) {
                pattDict[pattern[i]] = strVec[i];
            } 
            if (strDict[strVec[i]] != pattern[i] || pattDict[pattern[i]] != strVec[i]) {
                return false;
            }
        }

        return true;
        
    }

    vector<string> splitString(string &s) {
        string buf;
        stringstream ss(s);
        vector<string> strVec;

        while (ss >> buf)
            strVec.push_back(buf);

        return strVec;
    }

#if 0
    vector<string> split(string str, char delimiter) {
        vector<string> internal;
        stringstream ss(str); // Turn the string into a stream.
        string tok;

        while(getline(ss, tok, delimiter)) {
        internal.push_back(tok);
        }

        return internal;
    }
#endif

};



int main()
{
    string pattern = "abba";
    string str = "dog cat cat dog";
    
    Solution s;
    cout << s.wordPattern(pattern, str) << endl;
	system("pause");
	return 0;
}