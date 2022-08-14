// author: Jackie
// time: 22-8-14
// leetcode link: https://leetcode.cn/problems/binary-tree-level-order-traversal/submissions/

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<TreeNode*> curr_level = { root };
        while (curr_level.size() != 0)
        {
            vector<TreeNode*> next_level;
            vector<int> curr_val;
            curr_val.reserve(curr_level.size());
            for (TreeNode * node : curr_level)
            {
                if (node)
                {
                    curr_val.push_back(node->val);
                    next_level.push_back(node->left);
                    next_level.push_back(node->right);
                }
            }
            if (curr_val.size())
            {
                ans.push_back(curr_val);
            }
            curr_level.swap(next_level); 
        }
        return ans;
    }
};