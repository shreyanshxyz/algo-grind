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
    TreeNode* solve(vector<int>& preorder, int& i, int max){
        if(i == preorder.size() ||  preorder[i] > max) return NULL;
        
        TreeNode* root = new TreeNode(preorder[i++]); // we create a new node
        
        root->left = solve(preorder, i, root->val); // the left node must be lesser than the max value (which will be the previous root node)
        root->right = solve(preorder, i, max); // the right node must be greater than the max value (which will be the max value)
        
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {  
        int i = 0;
        return solve(preorder, i, INT_MAX);
    }
};