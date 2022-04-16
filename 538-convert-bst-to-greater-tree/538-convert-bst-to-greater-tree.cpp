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
    TreeNode* solve(TreeNode* root, int& num){
        if(!root) return root;
        
        solve(root->right, num);
        num += root->val; // we add the rightmost value to num
        root->val = num; // we update that num before returning to the previous node
        // this recursive call continues while we backtrack with the cumulative sum of all the values from the right->root->left in this manner
        solve(root->left, num);
        
        return root;
    }
    
    TreeNode* convertBST(TreeNode* root) {
        int num = 0;
        return solve(root, num);
    }
};