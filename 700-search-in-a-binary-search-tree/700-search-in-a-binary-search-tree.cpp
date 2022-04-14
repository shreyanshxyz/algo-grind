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
    TreeNode* searchBST(TreeNode* root, int val) {
        // brute force using bfs
//         if(!root) return root;
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty()){
//             int sz = q.size();
//             for(int i = 0; i < sz; i++){
//                 TreeNode* node = q.front();
//                 q.pop();
                
//                 if(node -> val == val)
//                     return node;
                
//                 if(node->left) q.push(node->left);
//                 if(node->right) q.push(node->right);
//             }
//         }
//         return NULL;
        
// Optimal Using Recursion
        if(!root) return root;
        
        //create node to return the answer
        TreeNode *node = new TreeNode(); 
        
        // if root->val != val we start to search in left and right subtrees
        // otherwise this would be required node and we will return it
        
        if(val < root -> val){ // search in left 
            node=searchBST(root -> left, val);
        } 
        else if(val > root -> val){ //search in right
            node=searchBST(root->right,val);
        }
        else{ // this is our required node
            node=root;
        }
        return node;
    }
};