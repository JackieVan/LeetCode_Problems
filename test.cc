#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory.h>
#include <set>
#include <queue>
#include <algorithm>
#include <stack>

using namespace std;

// Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
    ListNode *tail = nullptr;
    ListNode *rec(ListNode *node)
    {
        if (node->next) {
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
        return tail;
    }
};



int main()
{
    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(3);
    ListNode *node4 = new ListNode(4);
    ListNode *node5 = new ListNode(5);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    Solution sol;
    std::cout << node5 << "\n";
    std::cout << sol.reverseList(node1) << "\n";
    return 0;
}
