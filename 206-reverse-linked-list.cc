// author: Jackie
// time: 22-8-22
// leetcode link: https://leetcode.cn/problems/reverse-linked-list/

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
    ListNode *tail = nullptr;
    ListNode *rec(ListNode *node)
    {
        if (node && node->next) {
            rec(node->next)->next = node;
            return node;    
        } 
        else {
            tail = node;
            return tail;
        }
    }
public:
    ListNode* reverseList(ListNode* head) 
    {
        rec(head);
        if (head)
        {
            head->next = nullptr;
        }
        return tail;
    }
};