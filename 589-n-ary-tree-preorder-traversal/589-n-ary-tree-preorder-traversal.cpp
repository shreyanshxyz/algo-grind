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
    void solve(Node* root, vector<int>&ans){
        if(!root) return;
        
        ans.push_back(root->val); // we push root to the stack
        
        for(Node* cur : root -> children) // now we get to its children and then use the same recursive call to push
            solve(cur, ans); // this continues until we traverse our N-ary tree 
    }
    
    vector<int> preorder(Node* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};