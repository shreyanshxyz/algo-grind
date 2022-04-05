/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original) return original;
        
        queue<TreeNode*>q;
        q.push(cloned);
        TreeNode* x;
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front();
                q.pop();
                
                if(node->val == target->val){
                    x =  node;
                }
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return x;
    }
};