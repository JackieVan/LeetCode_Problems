// author: Jackie
// time: 22-8-22
// leetcode link: https://leetcode.cn/problems/binary-tree-inorder-traversal/

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
    std::vector<int> ans;
    void dfs(TreeNode *node)
    {
        if (node == nullptr)
        {
            return;
        }
        dfs(node->left);
        ans.push_back(node->val);
        dfs(node->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        dfs(root);
        return ans;
    }
};