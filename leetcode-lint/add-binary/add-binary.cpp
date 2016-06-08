// Source : https://leetcode.com/problems/add-binary/
// Author : LinTao
// Date   : 2016-06-08

// ****************************************************************
// 
// Given two binary strings, return their sum (also a binary string).

// For example,
// a = "11"
// b = "1"
// Return "100".
//
// ****************************************************************

#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;
        string result = "";
        for ( ; i >= 0, j >=0; --i, --j) {

        }
        return result;

    }
};


int main()
{
    string a = "11";
    string b = "1";

	system("pause");
	return 0;
}