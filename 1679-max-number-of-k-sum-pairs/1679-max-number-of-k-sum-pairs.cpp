class Solution {
public: 
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int ans = 0;
        for(auto i: nums){
            int complement = k - i;
            if(freq[complement] > 0){ans++; freq[complement]--;}
            else freq[i]++;
        }
        return ans;
    }
};
