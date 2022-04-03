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
    bool isSymmetric(TreeNode* root) {
        if(!root) return 1;
        
        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right); //pushing the left and right nodes of the root nodes
        while(!q.empty()){
            TreeNode* node1 = q.front();
            q.pop();
            TreeNode* node2 = q.front();
            q.pop();
            
            if(!node1 && node2) return 0;
            if(!node2 && node1) return 0;
            
            if(node1 && node2){ // if both nodes exist
                if(node1->val != node2->val) return 0; // if the left & right values do not match
                q.push(node1->left); // we push the mirror nodes of left nodes left & right nodes right
                q.push(node2->right); // we push the mirror nodes of left nodes left & right nodes right
                q.push(node1->right); // we push the mirror nodes of left nodes right & right nodes left
                q.push(node2->left); // we push the mirror nodes of left nodes right & right nodes left
            }
        }
    return 1;
    }
};