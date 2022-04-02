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
//         Right to left bfs
        if (!root) return nullptr;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            Node* rn = nullptr; // we create a rightnode and set it to null
            for(int i = 0; i < sz; i++){
                Node* cur = q.front(); // create a cur node to handle every current node
                q.pop();
                cur -> next = rn; // set its next to the null (rightnode as of now)
                rn = cur; // set cur as rightnode
                
                if(cur -> right){ //do the rightward bfs so that the right node gets inserted first so that
                    q.push(cur -> right); //right waala pehle null pe set hoga fir right waala cur hojaega
                    q.push(cur -> left); // fir jab left waala ayega tabtak vo right pe set hoga and we move further below
                }
            }
        }
        return root;
    }
};