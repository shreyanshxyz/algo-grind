class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
// BRUTE FORCE
        
//         vector<int>ans;
        
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] % 2 == 0)
//                 ans.insert(ans.begin(), nums[i]);
//             else
//                 ans.push_back(nums[i]);
//         }
        
        for (int i = 0, j = 0; j < nums.size(); j++)
            if (nums[j] % 2 == 0) swap(nums[i++], nums[j]);
        
        return nums;
    }
};