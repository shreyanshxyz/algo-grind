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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>a;
        if(!root) return a;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front();
                q.pop(); // simple bfs with left element first and right next
                
                if(i == sz - 1){
                    a.push_back(node->val); // we do this so that only the last element gets pushed i.e rightmost and the
                }                           // elements on the left do not get pushed in
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        }
        return a;
    }
};