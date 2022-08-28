// author: Jackie
// time: 22-8-28
// leetcode link: https://leetcode.cn/problems/delete-node-in-a-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) 
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};