// Source : https://leetcode.com/problems/symmetric-tree/
// Author : LinTao
// Date   : 2016-06-03

// ****************************************************************
// 
// Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

// For example, this binary tree is symmetric:

//     1
//    / \
//   2   2
//  / \ / \
// 3  4 4  3
// But the following is not:
//     1
//    / \
//   2   2
//    \   \
//    3    3
// Note:
// Bonus points if you could solve it both recursively and iteratively.

// confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.


// OJ's Binary Tree Serialization:
// The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.

// Here's an example:
//    1
//   / \
//  2   3
//     /
//    4
//     \
//      5
// The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}".
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
    bool isSymmetric(TreeNode* root) {
        if (! root) return true;
        if (! root->left && ! root->right) return true;
        // 根结点只有一颗子树
        if (! root->left || ! root->right)
            return false;

        mirrorTree(root->right);
        return equalTree(root->left, root->right);
    }

    TreeNode* mirrorTree(TreeNode *root) {
        if (root == NULL) return root;

        // 交换左右子树
        TreeNode *tmp = root->left;
        root->left = root->right;
        root->right = tmp;

        if (root->left) mirrorTree(root->left);
        if (root->right) mirrorTree(root->right);

        return root;
    }

    bool equalTree(TreeNode *left, TreeNode *right) {
        if (! left && ! right) return true;
        if (! left || ! right) return false;
        if (left->val == right->val)
            return equalTree(left->left, right->left) 
                && equalTree(left->right, right->right);
        return false;
    }
};


int main()
{


	system("pause");
	return 0;
}