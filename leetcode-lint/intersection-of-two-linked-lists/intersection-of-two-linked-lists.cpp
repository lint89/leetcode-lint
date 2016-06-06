// Source : https://leetcode.com/problems/intersection-of-two-linked-lists/
// Author : LinTao
// Date   : 2016-06-05

// ****************************************************************
// 
// Write a program to find the node at which the intersection of two singly linked lists begins.


// For example, the following two linked lists:

// A:          a1 → a2
//                    ↘
//                      c1 → c2 → c3
//                    ↗            
// B:     b1 → b2 → b3
// begin to intersect at node c1.


// Notes:

// If the two linked lists have no intersection at all, return null.
// The linked lists must retain their original structure after the function returns.
// You may assume there are no cycles anywhere in the entire linked structure.
// Your code should preferably run in O(n) time and use only O(1) memory.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA->next == NULL && headB->next == NULL) {
            if (headA->val == headB->val)
                return headA;
        }
        if (headA->next == NULL && headB->next != NULL) {
            getIntersectionNode(headA, headB->next);
        }
        if (headA->next != NULL && headB->next == NULL) {
            return getIntersectionNode(headA->next, headB);
        }
        if (headA->next != NULL && headB->next != NULL) {
            return getIntersectionNode(headA->next, headB->next);
        }

        return NULL;
    }

    bool *equalNode(ListNode *headA, ListNode *headB) {
        if (headA->next == NULL && headB->next == NULL) {
            if (headA->val == headB->val)
                return true;
            else
                return false;
        }
        if (headA->next == NULL && headB->next != NULL) {
            equalNode(headA, headB->next);
        }
        if (headA->next != NULL && headB->next == NULL) {
            return getIntersectionNode(headA->next, headB);
        }
        if (headA->next != NULL && headB->next != NULL) {
            return getIntersectionNode(headA->next, headB->next);
        }

    }
};


int main()
{
    ListNode *curr = NULL;

    ListNode *headA = new ListNode(1);
    curr = headA; curr->next = new ListNode(2);
    curr = curr->next; curr->next = new ListNode(3);
    curr = curr->next; curr->next = new ListNode(4);
    curr = curr->next; curr->next = new ListNode(5);

    ListNode *headB = new ListNode(7);
    curr = headB; curr->next = new ListNode(6);
    curr = curr->next; curr->next = new ListNode(8);
    curr = curr->next; curr->next = new ListNode(3);
    curr = curr->next; curr->next = new ListNode(4);
    curr = curr->next; curr->next = new ListNode(5);

    Solution s;
    ListNode *result = s.getIntersectionNode(headA, headB);
    if (result)
        cout << result->val << endl;
    else
        cout << "NULL" << endl;

	system("pause");
	return 0;
}