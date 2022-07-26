// author: Jackie
// time: 22-8-10
// leetcode link: https://leetcode.cn/problems/search-in-a-binary-search-tree/submissions/

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

public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr)
        {
            return nullptr;
        }
        if (root->val == val)
        {
            return root;
        }
        return searchBST(root->val > val ? root->left : root->right, val);
    }
};