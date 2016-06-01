// Source : https://leetcode.com/problems/contains-duplicate/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>


using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
#if 0
        for (auto it = nums.begin(); it != nums.end(); ++it)
        {
			if (find(it + 1, nums.end(), *it) != nums.end())
				return true;
        }
		return false;
#endif
		unordered_map<int, bool> m;
        for (auto item : nums) {
            if (m.find(item) != m.end()) return true;
            m[item]=true;
        }
        return false;
    }
};


int main()
{
	vector<int> nums;
	nums.push_back(0);

	Solution s;
	cout << s.containsDuplicate(nums) << endl;

	system("pause");
	return 0;
}