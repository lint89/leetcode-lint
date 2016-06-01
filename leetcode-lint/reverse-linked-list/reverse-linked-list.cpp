// Source : https://leetcode.com/problems/reverse-linked-list/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Reverse a singly linked list.

// click to show more hints.

// Hint:
// A linked list can be reversed either iteratively or recursively. Could you implement both?
//
// ****************************************************************

#include <iostream>


using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode *rhead, *node;
    ListNode* reverseList(ListNode* head) {
		if (head != NULL) {
			reverseList(head->next);
			node->next = new ListNode(head->val);
		}

		return rhead;
    }
};


int main()
{
	ListNode *head = new ListNode(1);
	ListNode *cur = head;
	cur->next = new ListNode(2);
	cur = cur->next;
	cur->next = new ListNode(3);
	cur = cur->next;
	cur->next = new ListNode(4);

	Solution s;
	s.reverseList(head);

	cur = head;
	while (cur)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	cout << endl;

	system("pause");
	return 0;
}