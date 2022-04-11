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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == NULL && q == NULL) return true; // self explanatory
    else if (p == NULL || q == NULL) return false; // if only one of the root nodes is null then we return false
    
    if (p -> val == q -> val) // if both the values match we launch a preorder recursive call going to both left and right and checking for the equal values. so we do the traversal and keep checking. if every value matches we return true.
        return isSameTree(p -> left, q -> left) && isSameTree(p -> right, q -> right);  
    return false;
    }
};