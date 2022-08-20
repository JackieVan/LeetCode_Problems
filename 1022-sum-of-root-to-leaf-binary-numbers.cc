// author: Jackie
// time: 22-8-20
// leetcode link: https://leetcode.cn/problems/sum-of-root-to-leaf-binary-numbers/

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
    void dfs(TreeNode *node, int curr)
    {
        if (node)
        {
            curr <<= 1;
            curr += node->val;
            if (node->left == nullptr && node->right == nullptr)
            {
                ans += curr;
            }
            dfs(node->left,  curr);
            dfs(node->right, curr);
        }
    }
public:
    int sumRootToLeaf(TreeNode* root)
    {
        dfs(root, 0);
        return ans;
    }
};