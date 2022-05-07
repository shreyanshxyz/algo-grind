class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int var = INT_MIN;
        stack<int> st;
        for( int i = nums.size()-1; i >= 0; i -- ){
            if( nums[i] < var ) return true;
            else while( !st.empty() && nums[i] > st.top() ){ 
              var = st.top(); st.pop(); 
            }
            st.push(nums[i]);
        }
        return false;
    }
};