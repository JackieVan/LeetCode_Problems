// author: Jackie
// time: 22-8-23
// leetcode link: https://leetcode.cn/problems/maximum-depth-of-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int max_dep = 0;
    void dfs(TreeNode *node, int depth)
    {
        if (node == nullptr)
        {
            max_dep = max_dep > depth ? max_dep : depth;
            return;
        }
        dfs(node->left, depth + 1);
        dfs(node->right, depth + 1);
    }
public:
    int maxDepth(TreeNode* root) 
    {
        dfs(root, 0);
        return max_dep;
    }
};