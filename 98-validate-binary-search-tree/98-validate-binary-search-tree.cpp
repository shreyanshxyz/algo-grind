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
    bool isValidBST(TreeNode* root) {
        long min = LONG_MIN;
        long max = LONG_MAX;
        return solve(root, min, max);
    }

    bool solve(TreeNode* root, const long min, const long max){
        if(!root) return true;
        
        if(root->val <= min || root->val >= max){
            return false;
        }
        
        return solve(root->left, min, root->val) && solve(root->right, root->val, max);
    }
};