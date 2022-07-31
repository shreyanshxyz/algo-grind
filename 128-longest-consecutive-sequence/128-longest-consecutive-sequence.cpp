class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int prev = nums[0];
        int ans = 1;
        int c = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == prev+1){
                c++;
            } else if(nums[i] != prev) {
                c = 1;
            }
            
            prev = nums[i];
            ans = max(c, ans);
        }
        return ans;
    }
};