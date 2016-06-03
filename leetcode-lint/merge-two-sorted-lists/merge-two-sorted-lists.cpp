// Source : https://leetcode.com/problems/merge-two-sorted-lists/
// Author : LinTao
// Date   : 2016-06-02

// ****************************************************************
// 
// Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) { 
		ListNode *pl1 = l1, *pl2 = l2;
		ListNode *head, *tmp, *curr;

		if (pl1->val < pl2->val) head = pl1;
		else head = pl2;

		while (pl1->next && pl2->next) {
			if (pl1->val < pl2->val) {
				if (pl1->next->val < pl2->val)
					pl1 = pl1->next;
				else {
					tmp = pl1->next;
					pl1->next = pl2;
					pl1 = tmp;
				}
			} else {
				if (pl2->next->val < pl1->val)
					pl2 = pl2->next;
				else {
					tmp = pl2->next;
					pl1->next = pl1;
					pl2 = tmp;
				}
			}

		}

		if (! pl1->next) pl1 = pl2;
		if (! pl2->next) pl2 = pl1;

		return head;
    }
};


int main()
{
	ListNode *head1 = new ListNode(1);
	ListNode *curr = head1;
	curr->next = new ListNode(3);
	curr = curr->next; curr->next = new ListNode(5);
	curr = curr->next; curr->next = new ListNode(7);
	curr = curr->next; curr->next = new ListNode(9);

	ListNode *head2 = new ListNode(2);
	curr = head2;
	curr->next = new ListNode(4);
	curr = curr->next; curr->next = new ListNode(6);
	curr = curr->next; curr->next = new ListNode(8);
	curr = curr->next; curr->next = new ListNode(10);

	Solution s;
	curr = s.mergeTwoLists(head1, head2);
	while (curr) {
		cout << curr->val << " ";
		curr = curr->next;
	}
	cout << endl;

	system("pause");
	return 0;
}