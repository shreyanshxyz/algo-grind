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
    void flatten(TreeNode* root) {
        TreeNode* cur = root; // we create a dummy node and assign it to the root
        while(cur){ // we start our iteration
            if(cur -> left){ // if a left node exists
                TreeNode* node = cur -> left; // we set our left node as a temp node
                while(node -> right){ // if it has right nodes it keeps on moving towards the rightmost node
                    node = node -> right;
                } 
// now here is where the magic begins, as soon as we reach the rightmost node, we set its right to cur's right (For example, On the first iteration, in example 1, cur's right is 5, and rightmost of our temp node is 4, so we set 4's right node as 5 )
                node -> right = cur -> right; 
// then we set the cur's current right as left and set left as null.
                cur -> right = cur -> left;
                cur -> left = NULL;
            }
// then we move to the next right element, here it is 2, after iteration 1. We then again go back to the "If" condition above and the same process continues
            cur = cur -> right;
        }
    }
};