// Source : https://leetcode.com/problems/pascals-triangle/
// Author : LinTao
// Date   : 2016-06-05

// ****************************************************************
// 
// Given numRows, generate the first numRows of Pascal's triangle.

// For example, given numRows = 5,
// Return

// [
//      [1],
//     [1,1],
//    [1,2,1],
//   [1,3,3,1],
//  [1,4,6,4,1]
// ]
//
// ****************************************************************

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    vector<vector<int>> result;

    vector<vector<int>> generate(int numRows) {
        vector<int> tmp;
        for (int i = 0; i < numRows; ++i) {
            vector<int> row(i + 1);
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
            result.push_back(row);
        }
        return result;
    }
};


int main()
{
    int nums = 5;

    Solution s;
    vector<vector<int>> result =  s.generate(nums);

    for (auto item : result) {
        for (auto i : item)
            cout << i << " ";
        cout << endl;
    }
    cout << endl;

	system("pause");
	return 0;
}