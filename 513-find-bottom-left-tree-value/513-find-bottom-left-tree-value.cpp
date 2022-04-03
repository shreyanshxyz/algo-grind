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
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        int x = 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            // x = 0;
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front();
                q.pop();
                
                if(i == 0)
                    x = node->val; // to push the first value in every iteration (that will be the leftest value)
                if(node->left) 
                    q.push(node->left);
                if(node->right) 
                    q.push(node->right);
            }
        }
        return x;
    }
};