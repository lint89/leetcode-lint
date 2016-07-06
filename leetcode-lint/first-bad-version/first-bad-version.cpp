// Source : https://leetcode.com/problems/first-bad-version/
// Author : LinTao
// Date   : 2016-06-12

// ****************************************************************
// 
// You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

// Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

// You are given an API bool isBadVersion(version) which will return whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.
//
// ****************************************************************

#include <iostream>


using namespace std;


// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int first = 1;
        int end = n;

        while (first <= end) {
            int mid = first + (end - first) / 2; // mid = (first + end) / 2 ???

            if (isBadVersion(mid) && ! isBadVersion(mid - 1)) 
                return mid;

            if (isBadVersion(mid)) 
                end = mid - 1;
            else
                first = mid + 1;
        }
        return -1;
    }
};


int main()
{

	system("pause");
	return 0;
}