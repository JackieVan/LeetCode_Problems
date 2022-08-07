// author: Jackie
// time: 22-8-7
// leetcode link: https://leetcode.cn/problems/increasing-order-search-tree/submissions/

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
void traverse(TreeNode *root, vector<TreeNode*>& vals)
{
    if (root == nullptr)
    {
        return;
    }
    traverse(root->left, vals);
    vals.push_back(root);
    traverse(root->right, vals);
}
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> nodes;
        traverse(root, nodes);
        nodes[0]->left = nullptr;
        nodes[0]->right = nullptr;        
        for (int i = 1; i != nodes.size(); ++i)
        {
            nodes[i]->left = nullptr;
            nodes[i]->right = nullptr;
            nodes[i-1]->right = nodes[i];
        }
        return nodes[0];
    }
};