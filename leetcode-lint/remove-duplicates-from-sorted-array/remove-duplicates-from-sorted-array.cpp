// Source : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Author : LinTao
// Date   : 2016-06-05

// ****************************************************************
// 
// Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

// Do not allocate extra space for another array, you must do this in place with constant memory.

// For example,
// Given input array nums = [1,1,2],

// Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <queue>


using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if (len <= 1) return len;

        int pos = 0;
        for (int i = 0; i < len - 1; ++i) {
            if (nums[i] != nums[i + 1]) {
                nums[++pos] = nums[i + 1];
            }
        }

        return pos + 1;
    }
};


int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);

    Solution s;
    cout << s.removeDuplicates(nums) << endl;

    for (auto item : nums)
        cout << item << " ";
    cout << endl;

	system("pause");
	return 0;
}