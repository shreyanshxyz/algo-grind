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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return nullptr;
        if(nums.size() == 1) return new TreeNode(nums[0]);
        int mid = nums.size()/2; // we find the middle element
        TreeNode* root = new TreeNode(nums[mid]); // we make the root node from the middle element
        
        vector<int>begin(nums.begin(), nums.begin()+mid); // we make a vector of all the elements before mid for our left 
        vector<int>ending(nums.begin()+mid+1, nums.end()); // we make a vector of all the elements after mid for our right
        
        root->left = sortedArrayToBST(begin);
        root->right = sortedArrayToBST(ending);
        
        return root;
    }
};