// Source : https://leetcode.com/problems/swap-nodes-in-pairs/
// Author : LinTao
// Date   : 2016-06-03

// ****************************************************************
// 
// Given a linked list, swap every two adjacent nodes and return its head.

// For example,
// Given 1->2->3->4, you should return the list as 2->1->4->3.

// Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
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
#if 0
    ListNode* swapPairs(ListNode* head) {
		if (! head || ! head->next) 
			return head;

		ListNode *curr = head;
		ListNode *result = head->next;
		ListNode *tmp, *last = NULL;

		while (curr && curr->next) {
			if (last) last->next = curr->next;
			tmp = curr;
			curr = curr->next;
			tmp->next = curr->next;	
			curr->next = tmp;
			curr = tmp->next;
			last = tmp;
		}

		return result;
    }
#endif

    ListNode* swapPairs(ListNode* head) {
		ListNode* h = NULL;
		for (ListNode *p = head; p && p->next; p = p->next) {
			ListNode *n = p->next;
			p->next = n->next;
			n->next = p;

			if (h) {
				h->next = n;
			}
			h = p;	// 保留当前结点，以备修改下一结点

			if (p == head)
				head = n;
		}
		return head;
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
	curr->next = new ListNode(4);

	Solution s;
	curr = s.swapPairs(head);

	while (curr) {
		cout << curr->val << " ";
		curr = curr->next;
	}
	cout << endl;

	system("pause");
	return 0;
}