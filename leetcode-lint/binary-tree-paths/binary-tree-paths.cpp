﻿// Source : https://leetcode.com/problems/binary-tree-paths/
// Author : LinTao
// Date   : 2016-06-07

// ****************************************************************
// 
// Given a binary tree, return all root-to-leaf paths.

// For example, given the following binary tree:

//    1
//  /   \
// 2     3
//  \
//   5
// All root-to-leaf paths are:

// ["1->2->5", "1->3"]
//
// ****************************************************************

#include <iostream>
#include <string>
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
    vector<string> binaryTreePaths(TreeNode* root) {
        
    }
};


int main()
{
	system("pause");
	return 0;
}