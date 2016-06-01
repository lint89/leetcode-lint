// Source : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
// Author : LinTao
// Date   : 2016-06-01

// ****************************************************************
// 
// Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

// According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”

//         _______6______
//        /              \
//     ___2__          ___8__
//    /      \        /      \
//    0      _4       7       9
//          /  \
//          3   5
// For example, the lowest common ancestor (LCA) of nodes 2 and 8 is 6. Another example is LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		vector<TreeNode*>  pathP, pathQ;
		if (!searchPath(root, p, pathP)) return NULL;
		if (!searchPath(root, q, pathQ)) return NULL;

		TreeNode *result = root;
		int len = min(pathP.size(), pathQ.size());
		for (int i = 0; i < len; ++i) {
			if (pathP[i] != pathQ[i])
				break;
			result = pathP[i];
		}
		return result;
    }

	bool searchPath(TreeNode *root, TreeNode *node, vector<TreeNode*> &path) {
		if (root == NULL)
			return false;
		if (root == node) {
			path.push_back(node);
			return true;
		}

		path.push_back(root);
		if (searchPath((root->left), node, path)) return true;
		if (searchPath((root->right), node, path)) return true;
		path.pop_back();

		return false;
	}
};


int main()
{
	TreeNode *root = new TreeNode(1);
	TreeNode *left = new TreeNode(2);
	root->left = left;

	Solution s;
	TreeNode *result = s.lowestCommonAncestor(root, root, left);
	cout << result->val << endl;

	system("pause");
	return 0;
}