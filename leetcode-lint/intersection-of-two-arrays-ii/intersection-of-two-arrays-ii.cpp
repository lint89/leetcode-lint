// Source : https://leetcode.com/problems/intersection-of-two-arrays-ii/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Given two arrays, write a function to compute their intersection.

// Example:
// Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].

// Note:
// Each element in the result should appear as many times as it shows in both arrays.
// The result can be in any order.
// Follow up:
// What if the given array is already sorted? How would you optimize your algorithm?
// What if nums1's size is small compared to num2's size? Which algorithm is better?
// What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>


using namespace std;


class Solution {
public:
	vector<int> result;
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int> tmp;
		for (auto item : nums1) {
			if (find(nums2.begin(), nums2.end(), item) != nums2.end())
				tmp.push_back(item);
		}
		for (auto item : nums2) {
			if (find(tmp.begin(), tmp.end(), item) != tmp.end())
				result.push_back(item);
		}
		return result;
    }
};


int main()
{
	vector<int> nums1, nums2;
	nums1.push_back(1);
	nums2.push_back(1);
	nums2.push_back(1);

	Solution s;
	vector<int> result = s.intersect(nums1, nums2);
	for (auto item : result)
		cout << item << " ";
	cout << endl;

	system("pause");
	return 0;
}