// Source : https://leetcode.com/problems/zigzag-conversion/
// Author : LinTao
// Date   : 2016-06-08

// ****************************************************************
// 
// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"
// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string text, int nRows);
// convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
//
// ****************************************************************

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Solution {
public:
#if 0
    string convert(string s, int nRows) {
        //The cases no need to do anything
        if (nRows<=1 || nRows>=s.size()) return s;

        vector<string> r(nRows);
        int row = 0;
        int step = 1;
        for(int i=0; i<s.size(); i ++) {
            if (row == nRows-1) step = -1;
            if (row == 0) step = 1;
            //cout << row <<endl;
            r[row] += s[i];
            row += step;
        }

        string result;
        for (int i=0; i<nRows; i++){
            result += r[i];
        }
        return result;
    }
#endif
#if 1   // wrong answer
    string convert(string s, int numRows) {
        string out;
        if (numRows == 1) return s;

        int len = s.size();
        for (int i = 0; i < numRows; ++i) {
            int pos = i;
            if (i == 0 || i == numRows - 1) {
                while (pos < len) {
                    out.push_back(s[pos]);
                    pos += (numRows -1) * 2;
                }
            } else {
                while (pos < len) {
                    out.push_back(s[pos]);
                    pos += (numRows - 1) * 2 - 2 * i;
                    if (pos < len) {
                        out.push_back(s[pos]);
                        pos += 2 * i;
                    }
                }
            }
        }
        return out;
    }
#endif
};


int main()
{
    string str = "ABCDE";
    //string str = "PAYPALISHIRING";
    int n = 4;
    Solution s;
    cout << s.convert(str, n) << endl;

	system("pause");
	return 0;
}