class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        
        int a = 1;
        int prev = nums[0];
        int c = 1;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == prev+1){
                c++;
            } else if (nums[i] != prev){
                c = 1;
            }
            
            prev = nums[i];
            a = max(c, a);
        }
        
        return a;
    }
};