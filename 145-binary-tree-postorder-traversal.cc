// author: Jackie
// time: 22-8-6
// leetcode link: https://leetcode.cn/problems/binary-tree-postorder-traversal/

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
private:
    void helper(vector<int>& res, TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }
        helper(res, root->left);
        helper(res, root->right);
        res.push_back(root->val);
    }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> res;
        res.reserve(100);
        helper(res, root);
        return res;
    }
};