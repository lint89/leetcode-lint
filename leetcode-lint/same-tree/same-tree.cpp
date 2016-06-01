// Source : https://leetcode.com/problems/same-tree/
// Author : LinTao
// Date   : 2016-5-31

// ****************************************************************
// 
// Given two binary trees, write a function to check if they are equal or not.

// Two binary trees are considered equal if they are structurally identical and the nodes have the same value.
//
// ****************************************************************

#include <iostream>
#include <vector>

using namespace std;



// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
		if (p && q) {
			if (p->val == q->val)
				return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
			else
				return false;
		} else if (!p && !q)
			return true;
		else 
			return false;
    }
};


int main()
{
	TreeNode *p = NULL;
	TreeNode *q = NULL;

	Solution s;
	cout << s.isSameTree(p, q) << endl;

	system("pause");
	return 0;
}