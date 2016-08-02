// Source : https://leetcode.com/problems/product-of-array-except-self/
// Author : LinTao
// Date   : 2016-07-06

// ****************************************************************
// 
// Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

// Solve it without division and in O(n).

// For example, given [1,2,3,4], return [24,12,8,6].

// Follow up:
// Could you solve it with constant space complexity? (Note: The output array does not count as extra space for the purpose of space complexity analysis.)
//
// ****************************************************************

#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        int product = 1;
        int count0 = 0;

        for (auto item : nums) {
            if (item == 0) {
                ++count0;
            }
        }
        
        if (count0 == 1) {
            int pos = 0;
            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i] == 0) {
                    pos = i;
                    continue;
                }
                product *= nums[i];
            }
            result[pos] = product;
        }

        if (count0 == 0) {
            for (auto item : nums) {
                product *= item;
            }

            for (int i = 0; i < nums.size(); ++i) {
                result[i] = product / nums[i];
            }
        }

        return result;
    }
};


int main()
{
    vector<int> nums;
    int array[] = {1, 2, 3, 4};
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        nums.push_back(array[i]);
    }

    Solution s;
    vector<int> result;
    result = s.productExceptSelf(nums);

    for (auto item : result) {
        cout << item << ' ';
    }
    cout << endl;

	system("pause");
	return 0;
}