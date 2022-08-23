// author: Jackie
// time: 22-8-23
// leetcode link: https://leetcode.cn/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        if (headA == NULL || headB == NULL)
        {
            return NULL;
        }
        while (ptrA != ptrB)
        {
            ptrA = ptrA == NULL ? headB : ptrA->next;
            ptrB = ptrB == NULL ? headA : ptrB->next;
        }
        return ptrA;
    }
};