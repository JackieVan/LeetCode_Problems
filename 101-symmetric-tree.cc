// author: Jackie
// time: 22-8-23
// leetcode link: https://leetcode.cn/problems/symmetric-tree/

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
    bool sym(TreeNode *left, TreeNode *right)
    {
        if (!left && !right)
        {
            return true;
        }
        if (!left || !right || left->val != right->val)
        {
            return false;
        }
        return sym(left->left, right->right) && sym(left->right, right->left);
    }
public:
    bool isSymmetric(TreeNode* root) 
    {
        if (root == nullptr)
        {
            return true;
        }
        return sym(root->left, root->right);
    }
};