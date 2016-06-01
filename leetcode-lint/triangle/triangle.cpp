// Source : https://oj.leetcode.com/problems/triangle/
// Author : LinTao
// Date   : 2016-5-30

// ****************************************************************
// Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

// For example, given the following triangle
// [
//      [2],
//     [3,4],
//    [6,5,7],
//   [4,1,8,3]
// ]
// The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

// Note:
// Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.
// ****************************************************************

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>> &triangle) {
        
    }
};


int main()
{
	vector<int> i;
	vector<vector<int>> v;

	i.clear();
	i.push_back(2);
	v.push_back(i);

	i.clear();
	i.push_back(3);
	i.push_back(4);
	v.push_back(i);

	i.clear();
	i.push_back(6);
	i.push_back(5);
	i.push_back(7);
	v.push_back(i);

	i.clear();
	i.push_back(4);
	i.push_back(1);
	i.push_back(8);
	i.push_back(3);
	v.push_back(i);

	Solution s;
	cout << s.minimumTotal(v) << endl;
}