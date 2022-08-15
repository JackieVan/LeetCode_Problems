// author: Jackie
// time: 22-8-15
// leetcode link: https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-search-tree/submissions/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *ancestor = root;
        while (true)
        {
            if (ancestor->val > p->val && ancestor->val > q->val)
            {
                ancestor = ancestor->left;
            }
            else if (ancestor->val < p->val && ancestor->val < q->val)
            {
                ancestor = ancestor->right;
            }
            else 
            {
                break;
            }
        }
        return ancestor;
    }
};