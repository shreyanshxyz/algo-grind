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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *ptr1 = head, *ptr2 = head, *kth = NULL;
        while (--k) // We traverse the list until we reach the kth node.
            ptr1 = ptr1->next;
        
        kth = ptr1; // Then we set "kth" to that node to remember it.
                    // set ptr2 to head and continue traversing the list, while we move both ptr1 and ptr2.
        ptr1 = ptr1->next;
        
        while (ptr1) { // When ptr1 reaches the end - ptr2 is on the (n-k)th node.
            ptr1 = ptr1->next;
            ptr2 = ptr2->next; 
        }
        swap(ptr2->val, kth->val); // Now we swap "kth" and "ptr2" and we're done!
        return head;
    }
};
