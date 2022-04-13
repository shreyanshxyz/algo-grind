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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        
        // queue<TreeNode*>q;
        // q.push(root);
        // while(!q.empty()){
        //     int sz = q.size();
        //     for(int i = 0; i < sz; i++){
        //         TreeNode* node = q.front();
        //         q.pop();
        //         swap(node->left, node->right); // we swap the left and right nodes on each level and then move to the next
        //         // this simply eases any complex methods to be used and we can invert the tree in an easy manner
        //         if(node->left) q.push(node->left);
        //         if(node->right) q.push(node->right);
        //     }
        // }
        invertTree(root->left);
        invertTree(root->right);
        swap(root -> left, root -> right);
        return root;
    }
};