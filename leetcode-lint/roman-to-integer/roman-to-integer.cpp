// Source : https://leetcode.com/problems/roman-to-integer/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Given a roman numeral, convert it to an integer.

// Input is guaranteed to be within the range from 1 to 3999.
//
// ****************************************************************

#include <iostream>
#include <string>
#include <vector>


using namespace std;

/*
 * 拼写规则：罗马数字共有7个，即I(1)，V(5)，X(10)，L(50)，C(100)，D(500)，M(1000)。
 * 重复数次：1个罗马数字重复几次，就表示这个数的几倍。
 * 右加左减：在一个较大的罗马数字的右边记上一个较小的罗马数字，表示大数字加小数字。在一个较大的数字的左边记上1个较小的罗马数字，表示大数字减小数字。但是，左减不能跨越一个位数。比如，99不可以用IC表示，而是用XCIX表示。此外，左减数字不能超过1位，比如8写成VIII，而非IIX。同理，右加数字不能超过3位，比如14写成XIV，而非XIIII。
 * 加线乘千：在1个罗马数字的上方加上1条横线或者在右下方写M，表示将这个数字乘以1000，即是原数的1000倍。同理，如果上方有2条横线，即是原数的1000000倍。
 * 单位限制：同样单位只能出现3次，如40不能表示为XXXX，而要表示为XL。但是，由于IV是古罗马神话主神朱庇特（IVPITER，古罗马字母没有J和U）的首字，因此有时用IIII代替IV。
 */

class Solution {
public:
    int romanToInt(string s) {
		int sum = 0;
		vector<int> nums;
		for (auto item : s) {
			switch (item)
			{
			case 'I': nums.push_back(1);	break;
			case 'V': nums.push_back(5);	break;
			case 'X': nums.push_back(10);	break;
			case 'L': nums.push_back(50);	break;
			case 'C': nums.push_back(100);	break;
			case 'D': nums.push_back(500);	break;
			case 'M': nums.push_back(1000); break;
			default: break;
			}
		}

    }
};


int main()
{


	system("pause");
	return 0;
}