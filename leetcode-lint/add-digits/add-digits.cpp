// Source : https://leetcode.com/problems/add-digits/
// Author : LinTao
// Date   : 2016-5-30

// ****************************************************************
// 
// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

// For example:

// Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

// Follow up:
// Could you do it without any loop/recursion in O(1) runtime?

// Hint:

// A naive implementation of the above process is trivial. Could you come up with other methods?
// What are all the possible results?
// How do they occur, periodically or randomly?
// You may find this Wikipedia article useful.
// 
// ****************************************************************

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
#if 0	// 迭代解法
		if (num < 10)
		{
			return num;
		}

        int sum = 0;
		while (num != 0) {
			sum += num % 10;
			num /= 10;
		}

		return addDigits(sum);
#endif

#if 1 // 循环解法 
		while (num >= 10)
		{
			int sum = 0;
			while (num != 0) {
				sum += num % 10;
				num /= 10;
			}
			num = sum;
		}

		return num;
#endif

    }
};


int main()
{
	int n;

	while (cin >> n)
	{
		Solution s;
		cout << s.addDigits(n) << endl;
	}

	system("pause");
	return 0;
}