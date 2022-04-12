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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        
        // we find the farthest depths on the left and right using this recursion call
        int l = maxDepth(root->left); 
        int r = maxDepth(root->right);
        
        // we return the max of both of them and add 1 because the root node does not get counted
        return max(l, r) + 1;
    }
};