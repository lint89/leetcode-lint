// Source : https://leetcode.com/problems/top-k-frequent-elements/
// Author : LinTao
// Date   : 2016-07-07

// ****************************************************************
// 
// Given a non-empty array of integers, return the k most frequent elements.

// For example,
// Given [1,1,1,2,2,3] and k = 2, return [1,2].

// Note: 
// You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
// Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> record;
         
    }
};


int main()
{
    int k = 2;
    vector<int> nums;
    int array[] = {1, 1, 1, 2, 2, 3};
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        nums.push_back(array[i]);
    }

    Solution s;
    vector<int> result = s.topKFrequent(nums, k);
    for (auto item : result) {
        cout << item << " ";
    }
    cout << endl;

	system("pause");
	return 0;
}