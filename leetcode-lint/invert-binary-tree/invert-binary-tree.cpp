// Source : https://leetcode.com/problems/invert-binary-tree/
// Author : LinTao
// Date   : 2016-5-30

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
	left->left = new TreeNode(1);



	Solution s;
	cout << s.invertTree(root) << endl;

	system("pause");
	return 0;
}