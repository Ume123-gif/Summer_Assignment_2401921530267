//2 - Delete Nth Node From End of Linked List (Leetcode - 19)
//TC - O(n)
//SC - O(1)

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* right = &dummy;
        ListNode* left = &dummy;
        for (int i = 0; i <= n; i++) right = right->next;
        while (right != NULL) {
            right=right->next;
            left=left->next;
        }
        left->next = left->next->next;
        return dummy.next;
    }
};