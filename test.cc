#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory.h>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

// Definition for singly-linked list.

//  * Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
 

//  * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        bool labelA = false;
        bool labelB = false;
        while (true)
        {
            ptrA = ptrA->next;
            ptrB = ptrB->next;
            if (ptrA == NULL)
            {
                if (labelA == false) {
                    ptrA = headB;
                    labelA = true;
                } else {
                    return NULL;
                }
            }
            if (ptrB == NULL)
            {
                if (labelB == false) {
                    ptrB = headA;
                    labelB = true;
                } else {
                    return NULL;
                }
            }
            if (ptrA == ptrB)
            {
                return ptrA;
            }
        }
    }
};


int main()
{
    // TreeNode *node1 = new TreeNode(1);
    // TreeNode *node2 = new TreeNode(2);
    // TreeNode *node3 = new TreeNode(3);
    // TreeNode *node4 = new TreeNode(4);
    // TreeNode *node5 = new TreeNode(5);
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
    std::cout << sol.getIntersectionNode(node1, node1)->val << "\n";
    return 0;
}