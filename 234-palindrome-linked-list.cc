// author: Jackie
// time: 22-8-24
// leetcode link: https://leetcode.cn/problems/palindrome-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        vector<int> list_vals;
        while (head)
        {
            list_vals.push_back(head->val);
            head = head->next;
        }
        for (int i = 0; i != list_vals.size() / 2; ++i)
        {
            if (list_vals[i] != list_vals[list_vals.size() - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};