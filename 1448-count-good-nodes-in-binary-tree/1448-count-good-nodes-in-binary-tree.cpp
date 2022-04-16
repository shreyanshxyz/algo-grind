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
    int ans = 0;
public:
    void solve(TreeNode* root, int lim){
        if(!root) return;
        
// if the current root value is greater than limit, we increment answer. (Always true for root)
        if(root->val >= lim){
            ans++;
        }
// we set the upper limit as the previous node always, as we traverse from left side and then the right side
        solve(root->left, max(lim,root->val));
        solve(root->right, max(lim,root->val));
    }
    int goodNodes(TreeNode* root) {
        solve(root, INT_MIN);
        return ans;
    }
};