class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>>ans;
        
        for(int i = 0; i < n; i++){
            long long n1 = (long long)target - (long long)nums[i];
            for(int j = i + 1; j < n; j++){
                long long n2 = (long long)n1 - (long long)nums[j];
                
                int l = j + 1;
                int r = n -1;
                
                while(l < r){
                    long long ts = (long long)nums[l] + (long long)nums[r];
                    
                    if(ts < n2) l++;
                    else if(ts > n2) r--;
                    else {
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[l]);
                        v.push_back(nums[r]);
                        ans.push_back(v);
                        
                        while(l < r && nums[l] == v[2]) l++;
                        while(l < r && nums[r] == v[3]) r--;
                    }
                }
                while(j+1 < n && nums[j] == nums[j+1]) j++;
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};