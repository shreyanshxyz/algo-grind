class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
// Currently we have an empty hash map
        unordered_map<int,int>hash;
        
        for(int i = 0; i < nums.size(); i++){
// We first search if target - current exists in the hash map, if it does we push back that value and we push our current value else we insert our current value into the hashmap
// We keep on following this for the next element when the previous is there
// Then the next when previous two are there and so on, hence getting the desired pair
            if(hash.find(target - nums[i]) != hash.end()) {
                ans.push_back(hash[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            hash[nums[i]] = i;
        }
        return ans;
    }
};