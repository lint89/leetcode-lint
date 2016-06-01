// Source : https://leetcode.com/problems/delete-node-in-a-linked-list/
// Author : LinTao
// Date   : 2016-5-31

// ****************************************************************
// 
// Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

// Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function
//
// ****************************************************************

#include <iostream>
#include <vector>

using namespace std;



// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
       node->val = node->next->val;
       node->next = node->next->next;
    }
};


int main()
{
	ListNode *head = new ListNode(1);
	ListNode *curr = head;
	curr->next = new ListNode(2);
	curr = curr->next;
	curr->next = new ListNode(3);
	curr = curr->next;
	ListNode *dele = curr;	// ¼ÇÂ¼É¾³ýµÄÔªËØ
	curr->next = new ListNode(4);

	Solution s;
	s.deleteNode(dele);

	ListNode *node = head;
	while (node)
	{
		cout << node->val << " ";
		node = node->next;
	}
	cout << endl;

	system("pause");
	return 0;
}