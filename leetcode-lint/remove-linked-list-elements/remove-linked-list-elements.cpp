// Source : https://leetcode.com/problems/remove-linked-list-elements/
// Author : LinTao
// Date   : 2016-06-08

// ****************************************************************
// 
// Remove all elements from a linked list of integers that have value val.

// Example
// Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
// Return: 1 --> 2 --> 3 --> 4 --> 5
//
// ****************************************************************

#include <iostream>
#include <string>
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* fakeHead = new ListNode(0);
        fakeHead->next = head;
        head = fakeHead;

        while (head && head->next) {
            if (head->next->val == val) {
                head->next = head->next->next;
            } else {
                head = head->next;
            }
        }

        return fakeHead->next;
    }
};


int main()
{
    ListNode *head = new ListNode(1);
    ListNode *curr = head;
    curr->next = new ListNode(2);
    curr = curr->next;
    curr->next = new ListNode(6);
    curr = curr->next;
    curr->next = new ListNode(3);
    curr = curr->next;
    curr->next = new ListNode(4);
    curr = curr->next;
    curr->next = new ListNode(5);
    curr = curr->next;
    curr->next = new ListNode(6);

    Solution s;
    curr = s.removeElements(head, 6);
    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;

	system("pause");
	return 0;
}