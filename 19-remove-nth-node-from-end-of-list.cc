// author: Jackie
// time: 22-9-5
// leetcode link: https://leetcode.cn/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int i = 0;
        ListNode *ptr1 = head;
        ListNode *ptr2 = head;
        while (i != n)
        {
            ++i;
            ptr1 = ptr1->next;
        }
        if (ptr1 == nullptr)
        {
            if (n == 1)
                return nullptr;
            else
                return ptr2->next;
        }
        while (ptr1->next)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr2->next = ptr2->next->next;
        return head;
    }
};