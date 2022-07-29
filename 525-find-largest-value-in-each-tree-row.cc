// author: Jackie
// time: 22-7-29
// leetcode link: https://leetcode.cn/problems/find-largest-value-in-each-tree-row/submissions/

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
    vector<int> largestValues(TreeNode* root) {
        if (root == nullptr)
        {
            return std::vector<int>();
        }
        std::vector<int> res;
        res.reserve(20);
        std::vector<TreeNode*> curr_level, temp;
        curr_level.reserve(20);
        curr_level.push_back(root);
        temp.reserve(20);
        while (curr_level.size() != 0)
        {
            temp.clear();
            int max = 0 - pow(2, 31);
            for (int i = 0; i != curr_level.size(); ++i)
            {
                if (curr_level[i]->val > max)
                {
                    max = curr_level[i]->val;
                }
                 if (curr_level[i]->left)
                {
                    temp.push_back(curr_level[i]->left);
                }
                if (curr_level[i]->right)
                {
                    temp.push_back(curr_level[i]->right);
                }
            }
            res.push_back(max);
            curr_level.swap(temp);
        }
        return res;
    }
};