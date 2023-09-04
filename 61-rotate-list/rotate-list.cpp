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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* traverse = head;
        if(!head) return nullptr;
        if(!head->next) return head;
        int l = 0;
        while(traverse->next){
            l++;
            traverse = traverse->next;
        }
        
        traverse->next = head;
        k = k%(l + 1);
        int count = l - k + 1;
        while(count > 0){
            traverse = head;
            head = head->next;
            count--;
        }
        traverse->next = nullptr;

        return head;
    }
};