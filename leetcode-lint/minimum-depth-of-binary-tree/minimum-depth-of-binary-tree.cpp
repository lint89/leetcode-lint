// Source : https://leetcode.com/problems/minimum-depth-of-binary-tree/
// Author : LinTao
// Date   : 2016-06-05

// ****************************************************************
// 
// Given a binary tree, find its minimum depth.

// The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
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
    int minDepth(TreeNode* root) {
        if (NULL == root) return 0;
        if (! root->left && ! root->right)
            return 1;
        if (root->left || root->right) {
            if (root->left && root->right) {
                return min(minDepth(root->left), minDepth(root->right)) + 1;
            }
            if (root->left && ! root->right)
                return minDepth(root->left) + 1;
            if (! root->left && root->right)
                return minDepth(root->right) + 1;
        }
        return 0;
    }
};


int main()
{

	system("pause");
	return 0;
}