// author: Jackie
// time: 22-8-14
// leetcode link: https://leetcode.cn/problems/remove-linked-list-elements/

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *prev = head;
        ListNode *curr = head;
        while (curr)
        {
            if (curr->val == val)
            {
                if (curr == prev) {
                    head = curr->next;
                    prev = curr = head;
                } else {
                    prev->next = curr->next;
                    curr = curr->next;
                }
            } 
            else {
                prev = curr;
                curr = curr->next;
            }

        }
        return head;
    }
};