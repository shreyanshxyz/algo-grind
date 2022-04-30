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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode;
        dummy -> next = head; // we create a dummy node which acts as the next of head itself
        ListNode* curr = dummy;  // initialize a starting node curr equal to the dummy node
        
//         the nodes will look like this
//         (dum & cur) -> (head) -> (a) -> (b) -> (c) -> (null)
        
        while(curr -> next) {
            if(curr -> next -> val == val) { // if the next element has the value we are given
                curr -> next = curr -> next -> next; // we simply put the current's next as the next to next element.
            } else { 
                curr = curr -> next; // if not then we move to the next node
            }
        }
        
        return dummy -> next;
    }
};