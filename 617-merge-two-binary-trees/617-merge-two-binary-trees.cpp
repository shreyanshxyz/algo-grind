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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return NULL;
        if(!root1) return root2;
        if(!root2) return root1;
        queue<pair<TreeNode*, TreeNode*>>q;
        q.push({root1, root2});
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            // (1) we add the value of the second tree's node to the first node
            node.first->val+=node.second->val;
            
            //if both their leftnodes exist we push them back into the queue and repeat (1)
            if(node.first->left && node.second->left)
                q.push({node.first->left,node.second->left});
            //if only one node exists then we make both the nodes as the same one
            // like if the second tree's left node exists then we make the first tree's node left as well
            else if (node.second->left)
                node.first->left=node.second->left;
            
            //if both their rightnodes exist we push them back into the queue and repeat (1)
            if(node.first->right && node.second->right)
                q.push({node.first->right, node.second->right});
            //if only one node exists then we make both the nodes as the same one
            // like if the second tree's right node exists then we make the first tree's node right as well
            else if (node.second->right)
                node.first->right=node.second->right;
        }
        return root1;
    }
};