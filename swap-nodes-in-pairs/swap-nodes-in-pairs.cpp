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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* dummy = new ListNode(); // we create a dummy node;
        
        ListNode* prevNode=dummy; // we assign dummynode to prevnode
        ListNode* currNode=head; // we assign a currnode to head
        
        while(currNode && currNode -> next){ // while we dont reach the end of the linked list
            prevNode -> next = currNode -> next; 
            currNode -> next = prevNode -> next -> next;
            prevNode->next->next = currNode;
            
            prevNode = currNode;
            currNode = currNode -> next;
        }
        return dummy -> next;
    }
};