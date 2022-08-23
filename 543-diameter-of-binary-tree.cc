// author: Jackie
// time: 22-8-23
// leetcode link: https://leetcode.cn/problems/diameter-of-binary-tree/

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
    int ans = 0;
    int dfs(TreeNode *root, int curr_dep)
    {
        if (root == nullptr)
        {
            return curr_dep;
        }
        int dep_left = dfs(root->left, curr_dep + 1);
        int dep_right = dfs(root->right, curr_dep + 1);
        ans = std::max(ans, dep_left + dep_right - 2 * (curr_dep + 1));
        return std::max(dep_left, dep_right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) 
    {
        ans = std::max(ans, dfs(root->left, 0) + dfs(root->right, 0));
        return ans;
    }
};