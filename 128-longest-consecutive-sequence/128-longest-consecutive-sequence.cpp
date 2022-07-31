class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0 ) return 0;
        set<int>set;
        for(auto n: nums){
            set.insert(n);
        }
        
        int ans = 0;
        
        for(auto i: set){
            if(!set.count(i-1)){
                int cur = i;
                int streak = 1;
                
                while(set.count(cur+1)){
                    cur += 1;
                    streak += 1;
                }
                ans = max(streak, ans);
            }
        }
        return ans;
    }
};