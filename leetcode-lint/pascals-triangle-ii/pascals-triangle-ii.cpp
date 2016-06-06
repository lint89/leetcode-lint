// Source : https://leetcode.com/problems/pascals-triangle-ii/
// Author : LinTao
// Date   : 2016-06-05

// ****************************************************************
// 
// Given an index k, return the kth row of the Pascal's triangle.

// For example, given k = 3,
// Return [1,3,3,1].

// Note:
// Could you optimize your algorithm to use only O(k) extra space?
//
// ****************************************************************

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> tmp(rowIndex + 1);
        vector<int> row(rowIndex + 1);
        for (int i = 0; i < rowIndex + 1; ++i) {
            for (int j = 0; j < i + 1; ++j) {
                if (j == 0) {
                    row[j] = 1;
                } else if (j > 0 && j == i) {
                    row[j] = tmp[j - 1];
                }
                else {
                    row[j] = tmp[j] + tmp[j - 1];
                }
            }
            tmp = row;
        }
        return row;

    }
};


int main()
{
    int nums = 3;

    Solution s;
    vector<int> result =  s.getRow(nums);

    for (auto item : result) {
            cout << item << " ";
    }
    cout << endl;

	system("pause");
	return 0;
}