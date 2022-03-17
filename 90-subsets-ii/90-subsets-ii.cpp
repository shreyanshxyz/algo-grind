class Solution {
public:
    void sSum(int index, vector<int> &nums, vector<vector<int>> &ans, vector<int> &a){
        ans.push_back(a);
        
        for(int i = index; i < nums.size(); i++){
            if(i != index && nums[i] == nums[i-1]) continue;
            a.push_back(nums[i]);
            sSum(i+1, nums, ans, a);
            a.pop_back();
        }
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>a;
        
        sort(nums.begin(), nums.end());
        sSum(0, nums, ans, a);
        return ans;
    }
};