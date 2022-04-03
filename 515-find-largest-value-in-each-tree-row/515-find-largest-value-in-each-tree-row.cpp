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
    vector<int> largestValues(TreeNode* root) {
        vector<int>large;
        if(!root) return large;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int x = INT_MIN;
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front();
                q.pop();
                
                x = max(node->val,x);
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            large.push_back(x);
        }
        return large;
    }
};