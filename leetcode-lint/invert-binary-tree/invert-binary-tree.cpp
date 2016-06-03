// Source : https://leetcode.com/problems/invert-binary-tree/
// Author : LinTao
// Date   : 2016-5-30, AC : 2016-06-03

// ****************************************************************
// 
// Invert a binary tree.

//      4
//    /   \
//   2     7
//  / \   / \
// 1   3 6   9
// to
//      4
//    /   \
//   7     2
//  / \   / \
// 9   6 3   1
//
// ****************************************************************

#include <iostream>

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
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return root;

        // ½»»»×óÓÒ×ÓÊ÷
        //TreeNode *tmp = invertTree(root->left);
        //root->left = invertTree(root->right);
        //root->right = tmp;

        TreeNode *tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        if (root->left) invertTree(root->left);
        if (root->right) invertTree(root->right);

        return root;
    }
};


int main()
{
	//      4
	//    /   \
	//   2     7
	//  / \   / \
	// 1   3 6   9
	TreeNode *root = new TreeNode(4);

	TreeNode *current = root;
	current->left = new TreeNode(2);
	current->right = new TreeNode(7);
    current->left->left = new TreeNode(1);
    current->left->right = new TreeNode(3);
    current->right->left = new TreeNode(6);
    current->right->right = new TreeNode(9);

	Solution s;
    s.invertTree(root);

	system("pause");
	return 0;
}