#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory.h>

using namespace std;


//   Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        static bool flag = true;
        static int init_val;
        if (flag)
        {
            init_val = root->val;
            flag = false;
        }
        if (root->left && (root->left->val >= root->val || root->left->val >= init_val))
        {
            return false;
        }
        if (root->right && (root->right->val <= root->val || root->right->val <= init_val))
        {
            return false;
        }
        if (root->left && isValidBST(root->left) == false)
        {
            return false;
        }
        if (root->right && isValidBST(root->right) == false)
        {
            return false;
        }
        return true;
    }
};


int main()
{
  TreeNode *root = new TreeNode(0);
  root->left = nullptr;
  root->right = new TreeNode(1);
  root->right->left = nullptr;
  root->right->right = nullptr;
  Solution sol;
  std::cout << sol.isValidBST(root) << "\n";
  return 0;
}