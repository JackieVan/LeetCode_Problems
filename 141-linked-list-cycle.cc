// author: Jackie
// time: 22-8-23
// leetcode link: https://leetcode.cn/problems/linked-list-cycle/

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
    bool hasCycle(ListNode *head)
    {
        if (!head || head->next == NULL || head->next->next == NULL)
        {
            return false;
        }
        ListNode *ptrA = head->next;
        ListNode *ptrB = ptrA->next;
        while (true)
        {
            ptrB = ptrB->next;
            if (ptrB == NULL) {
                return false;
            }
            ptrB = ptrB->next;
            ptrA = ptrA->next;
            if (ptrB == NULL || ptrA == NULL)
            {
                return false;
            }
            if (ptrA == ptrB)
            {
                return true;
            }
        }
    }
};