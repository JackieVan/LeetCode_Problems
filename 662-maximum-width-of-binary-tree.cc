// author: Jackie
// time: 22-8-21
// leetcode link: https://leetcode.cn/problems/maximum-width-of-binary-tree/

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
    int widthOfBinaryTree(TreeNode* root) {
        int ans = 0;
        std::map<TreeNode*, unsigned long long> values;
        std::vector<TreeNode*> curr = { root };
        while (curr.size() != 0)
        {
            std::vector<TreeNode*> temp;
            temp.reserve(curr.size() * 2);
            for (TreeNode *node : curr)
            {
                if (node->left)
                {
                    temp.push_back(node->left);
                    values[node->left] = values[node] * 2;
                }
                if (node->right)
                {
                    temp.push_back(node->right);
                    values[node->right] = values[node] * 2 + 1;
                }
            }
            if (temp.size() > 1)
            {
                int width = values[temp.back()] - values[temp.front()] + 1;
                ans = ans > width ? ans : width;
            }
            curr.swap(temp);
        }
        return std::max(1, ans);
    }
};