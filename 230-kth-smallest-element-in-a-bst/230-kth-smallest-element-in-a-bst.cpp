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
    void solve(TreeNode* root, int& k, int& x){
        if(!root) return;
        
        solve(root->left, k, x); // we do an inorder traversal, and we decremenet k each time we call our recursive function
        k--;
        // as soon as we reach 0, we set the current node's value to our answer and return it
        if(k == 0) 
            x = root -> val;
        solve(root->right, k, x);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int x = 0;
        solve(root, k, x);
        return x;
    }
};