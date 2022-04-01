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
    int deepestLeavesSum(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*>q;
        int s = 0; // declaring a sum variable to return the sum
        q.push(root); 
        while(!q.empty()){
            s = 0; // the sum keeps on resetting on every level's iteration until the very deepest level
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front();
                q.pop();
                s += node->val; // we update sum with the values of the nodes at every level until the deepest level
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return s;
    }
};