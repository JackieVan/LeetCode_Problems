// author: Jackie
// time: 22-7-26
// leetcode link: shan-chu-lian-biao-de-jie-dian-lcof

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
    ListNode* deleteNode(ListNode* head, int val) {
        if (head == nullptr)
        {
            return head;
        }
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while (true)
        {
            if (curr->val == val)
            {
                if (prev == nullptr) // head.val = val
                {
                    return curr->next;
                }
                else
                {
                    prev->next = curr->next;
                    break;
                }
            }
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};