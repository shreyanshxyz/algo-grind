/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> p;    // a ds to store our values
        if(root == NULL){
            return p;
        }
        
        stack<TreeNode*> st; // initialisation of a stack
        st.push(root);       // we push the rootnode into the stack
        
        while(!st.empty()){
            root = st.top(); // setting the root node as the top element of the stack
            st.pop(); // popping off that node
            p.push_back(root -> val); // pushing the value of the root node into the stack
            
            if(root -> right != NULL){ // now we check if the right of the root has a value
                st.push(root -> right); // if it has it gets pushed into the stack and same 
            } // process as above happens in the loop above.
            
            if(root -> left != NULL){ // now we check if the left of the root has a value
                st.push(root -> left);// if it has it gets pushed into the stack and same 
            } // process as above happens in the loop above.
        }
        return p;
    }
};