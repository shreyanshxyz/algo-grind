class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(auto n: nums){
            st.insert(n);
        }
        
        int a = 0;
        
        for(auto num : nums){
            if(!st.count(num-1)){
                int c = num;
                int s = 1;
                
                while(st.count(c+1)){
                    c += 1;
                    s += 1;
                }
                a = max(a, s);
            }
        }
        
        return a;
    }
};