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
    bool hasCycle(ListNode *head) { // 3 2 0 -4 1
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) { // 3 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }
};