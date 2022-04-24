class Solution {
public:
    void solve(int num, int& s){
        if(num == 0)
            return;
        
        if(num%2 == 0){
            ++s;
            solve(num/2, s);
        } else {
            ++s;
            solve(num-1, s);
        }
    }
    
    int numberOfSteps(int num) {
        int ans = 0;
        solve(num, ans);
        return ans;
    }
};