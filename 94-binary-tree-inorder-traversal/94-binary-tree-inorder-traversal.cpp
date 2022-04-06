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
    vector<int> inorderTraversal(TreeNode* root) {
        stack <TreeNode*> st;
        TreeNode* node = root; 
        vector<int> a;
        
        while(true){
            if(node != NULL){
                st.push(node); // we push the root node into the stack
                node = node -> left; // after that we push the consecutive leftward nodes into the stack
            }
            else {
                if(st.empty() == true) break;
                
                node = st.top(); // we assign the topmost left node to node
                st.pop(); 
                
                a.push_back(node->val); // we start pushing
                node = node -> right; // after the stack is empty then we move to the rightward side
            }
        }
    return a;
    }
};