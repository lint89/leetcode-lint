// Source : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Given a sorted linked list, delete all duplicates such that each element appear only once.

// For example,
// Given 1->1->2, return 1->2.
// Given 1->1->2->3->3, return 1->2->3.
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
    ListNode* deleteDuplicates(ListNode* head) {
		ListNode *curr = head;
		while (curr && curr->next) {
			if (curr->val == curr->next->val) {
				ListNode *tmp = curr->next->next;
				delete curr->next;
				curr->next = tmp;
			} 
			else 
				curr = curr->next;
		}
		return head;
    }
};


int main()
{
	ListNode *head = new ListNode(1);
	ListNode *curr = head;
	curr->next = new ListNode(1);
	curr = curr->next;
	curr->next = new ListNode(2);
	curr = curr->next;
	curr->next = new ListNode(3);
	curr = curr->next;
	curr->next = new ListNode(3);

	Solution s;
	ListNode *result = s.deleteDuplicates(head);
	curr = result;
	while (curr) {
		cout << curr->val << " ";
		curr = curr->next;
	}
	cout << endl;

	system("pause");
	return 0;
}