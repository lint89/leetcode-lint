// Source : https://leetcode.com/problems/nim-game/
// Author : LinTao
// Date   : 2016-5-30

// ****************************************************************
// 
// You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.

// Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.

// For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.

// Hint:

// If there are 5 stones in the heap, could you figure out a way to remove the stones such that you will always be the winner?
// 
// ****************************************************************

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
		// 盘子小于四时，可一次取完盘子，必赢
		if (n < 4)
            return 1;
            
		// 当盘子数为4时，无论取几个盘子都输
		// 增加1到3个盘子，则可以使对方取盘子时盘子数为4个，对方输
		// 由此可知，当盘子数为4的倍数时，必输
        if (n % 4 == 0)
            return 0;
        else
            return 1;
    }
};


int main()
{
	int n;

	while (cin >> n)
	{
		Solution s;
		cout << s.canWinNim(n) << endl;
	}

	system("pause");
	return 0;
}