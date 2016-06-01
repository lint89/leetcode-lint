// Source : https://leetcode.com/problems/intersection-of-two-arrays/
// Author : LinTao
// Date   : 2016-5-31

// ****************************************************************
// 
// Given two arrays, write a function to compute their intersection.

// Example:
// Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].

// Note:
// Each element in the result must be unique.
// The result can be in any order.
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <set>

using namespace std;


class Solution {
public:
	set<int> inter1, inter2;	// 使用set合并重复元素
	vector<int> result;

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		for (int i = 0; i < nums1.size(); ++i) 
			inter1.insert(nums1[i]);

		for (int i = 0; i < nums2.size(); ++i) {
			if (inter1.find(nums2[i]) != inter1.end())
				inter2.insert(nums2[i]);
		}

		for (auto it : inter2) 
			result.push_back(it);
        
		return result;
    }
};


int main()
{
	//vector<int> nums1 = {1, 2, 2, 1};
	//vector<int> nums2 = {2, 2};
	vector<int> nums1, nums2;
	nums1.push_back(1);
	nums1.push_back(2);
	nums1.push_back(2);
	nums1.push_back(1);
	nums2.push_back(2);
	nums2.push_back(2);

	Solution s;
	vector<int> result = s.intersection(nums1, nums2);
	for (auto i : result)
		cout << i << " ";

	cout << endl;

	system("pause");
	return 0;
}