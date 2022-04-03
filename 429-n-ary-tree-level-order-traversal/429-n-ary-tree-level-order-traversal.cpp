/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            vector<int>a;
            for(int i = 0; i < sz; i++){
                Node* node = q.front();
                q.pop();
                
                a.push_back(node->val);
                // Simple BFS Upto here
                // -------------------------------------------------------------------------
                //Now since every level is separated by a null pointer but it contains children in a vector. What we do                   //now is traverse through that node's children and push them into the queue and repeat the same process.
                //This whole thing continues for every level
                for (Node* child : node->children) {
                    q.push(child);
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};