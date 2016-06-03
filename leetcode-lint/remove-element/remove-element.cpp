// Source : https://leetcode.com/problems/remove-element/
// Author : LinTao
// Date   : 2016-06-03

// ****************************************************************
// 
// Given an array and a value, remove all instances of that value in place and return the new length.

// Do not allocate extra space for another array, you must do this in place with constant memory.

// The order of elements can be changed. It doesn't matter what you leave beyond the new length.

// Example:
// Given input array nums = [3,2,2,3], val = 3

// Your function should return length = 2, with the first two elements of nums being 2.

// Hint:

// Try two pointers.
// Did you use the property of "the order of elements can be changed"?
// What happens when the elements to remove are rare?
//
// ****************************************************************

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int valNum = 0;
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            if (nums[i] == val)
                ++valNum;
        }

        int valPos= len - 1;
        for (int i = 0; i < len - valNum; ++i) {
            if (nums[i] == val) {
                // 从最后开始寻找非val的位置，并替换从头开始的val
                while (nums[valPos] == val) {
                    --valPos;
                }
                nums[i] = nums[valPos];
                --valPos;
            }
        }

        return len - valNum;
    }
};


int main()
{
    int array[] = {3, 2, 2, 3};
    int len = sizeof(array) / sizeof(array[0]);
    vector<int> nums;
    for (int i = 0; i < len; ++i)
        nums.push_back(array[i]);

    Solution s;
    cout << s.removeElement(nums, 3) << endl;


	system("pause");
	return 0;
}