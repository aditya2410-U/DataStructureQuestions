/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;
       Node* current = head;
       while(current != NULL){
        Node* newNode = new Node(current->val);
        newNode->next = current->next;
        current->next = newNode;
        current = newNode->next;
       } // copy
       //now random
       current = head;
       while(current != NULL){
        if (current->random != NULL) {
        current->next->random = current->random->next;
        }
        current = current->next->next;
       }
       // ab separation
       Node* original = head;
       Node* copy = head->next;
       Node* copyHead = copy;
       while(original != NULL){
        original->next = original->next->next;
        copy->next = (copy->next != NULL) ? copy->next->next : NULL;
        original = original->next;
        copy = copy->next;
       }
       return copyHead; 
    }
};