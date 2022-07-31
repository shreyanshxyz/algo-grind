class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        if(nums.empty()) return ans;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++){
            long long n3 = (long long)target - (long long)nums[i];
            for(int j = i+1; j < nums.size(); j++){
                long long n2 = (long long)n3 - (long long)nums[j];
                
                int front = j+1;
                int back = nums.size() - 1;
                
                while(front < back){
                    int x = nums[front] + nums[back];
                    
                    if(x < n2) front++;
                    else if(x > n2) back--;
                    
                    else {
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = nums[i];
                        quadruplet[1] = nums[j];
                        quadruplet[2] = nums[front];
                        quadruplet[3] = nums[back];
                        ans.push_back(quadruplet);
                        
                        while (front < back && nums[front] == quadruplet[2]) ++front;
                    
                        while (front < back && nums[back] == quadruplet[3]) --back;
                    }
                }
                while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;
        }
        return ans;
    }
};