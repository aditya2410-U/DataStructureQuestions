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
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode*  prev = NULL;
        int count = 0;
        while(count < n){
            fast = fast -> next;
            count++;
        }
         if (!fast) {
            return head->next;
        }
        while(fast != NULL){
            fast = fast -> next;
            prev = slow;
            slow = slow -> next;
            
        }
        prev->next = slow->next;
        return head;
    }
};