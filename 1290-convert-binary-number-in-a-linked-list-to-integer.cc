// author: Jackie
// time: 22-8-13
// leetcode link: https://leetcode.cn/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/

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
    int getDecimalValue(ListNode* head) {
        int bits_num = -1;
        ListNode *temp = head;
        while (head)
        {
            ++bits_num;
            head = head->next;
        }
        int ans = 0;
        while (temp)
        {
            ans += temp->val * (1 << bits_num);
            --bits_num;
            temp = temp->next;
        }
        return ans;
    }
};