// Source : https://leetcode.com/problems/palindrome-linked-list/
// Author : LinTao
// Date   : 2016-06-08

// ****************************************************************
// 
// Given a singly linked list, determine if it is a palindrome.

// Follow up:
// Could you do it in O(n) time and O(1) space?
//
// ****************************************************************

#include <iostream>
#include <string>
#include <stack>


using namespace std;



// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode *curr = head;
        while (curr) {
            s.push(curr->val);
            curr = curr->next;
        }
        curr = head;
        while (curr) {
            int val = s.top();
            if (curr->val != val)
                return false;
            curr = curr->next;
            s.pop();
        }

        return true;
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
    curr->next = new ListNode(3);
    curr = curr->next;
    curr->next = new ListNode(2);
    curr = curr->next;
    curr->next = new ListNode(1);

    Solution s;
    cout << s.isPalindrome(head) << endl;

	system("pause");
	return 0;
}