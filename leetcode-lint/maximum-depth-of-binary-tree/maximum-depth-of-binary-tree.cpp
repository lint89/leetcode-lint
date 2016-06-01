// Source : https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Author : LinTao
// Date   : 2016-5-30

// ****************************************************************
// 
// Given a binary tree, find its maximum depth.

// The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
// 
// ****************************************************************

#include <iostream>
#include <string>

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
    int maxDepth(TreeNode* root) {
		//if (NULL == root)
		//	return 0;
		//else {
		//	int l = maxDepth(root->left);
		//	int r = maxDepth(root->right);
		//	return (l > r) ? l + 1 : r + 1;

		if (root==NULL){
            return 0;
        }
        if (!root->left && !root->right){
            return 1;
        }
        int left=1, right=1;
        if (root->left){
            left += maxDepth(root->left);
        }
        if (root->right){
            right += maxDepth(root->right);
        }
        return left>right?left:right;
    }
};


int main()
{
	/*
	              1
	             / \
				2   3
			   /
			  4
	*/
	TreeNode *root = new TreeNode(1);

	TreeNode *current = root;
	TreeNode *left = new TreeNode(2);
	TreeNode *right = new TreeNode(3);
	current->left = left;
	current->right = right;

	current = left;
	left = new TreeNode(4);
	current->left = left;


	Solution s;
	cout << s.maxDepth(root) << endl;

	system("pause");
	return 0;
}