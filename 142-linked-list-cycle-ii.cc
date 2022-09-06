// author: Jackie
// time: 22-9-6
// leetcode link: https://leetcode.cn/problems/linked-list-cycle-ii/

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
    ListNode *detectCycle(ListNode *head) 
    {
        if (head == NULL)
        {
            return NULL;
        }
        ListNode *slow = head->next;
        if (slow == NULL)
        {
            return NULL;
        }
        ListNode *fast = slow->next;
        while (fast != slow)
        {
            if (fast)
            {
                fast = fast->next;
            }
            if (fast)
            {
                fast = fast->next;
            }
            if (slow)
            {
                slow = slow->next;
            }
        }
        if (fast == NULL)
        {
            return NULL;
        }
        ListNode *ptr = head;
        while (ptr != slow)
        {
            ptr = ptr->next;
            slow = slow->next;
        }
        return ptr;
    }
};