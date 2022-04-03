/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                Node* n = q.front(); 
                q.pop();
                
                if(sz == 0)
                    n->next = NULL; // if the queue is empty we are on the rightmost node thus we set its next to null
                else
                    n->next = q.front(); // else we set it to the next node in the queue since we are not rightmost side
                
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
        }
        return root;
    }
};