class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b){
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& b, int t) {
        sort(b.begin(), b.end(), cmp);
        int ans = 0;
        for(auto i : b){
            if(t > i[0]){
                t -= i[0];
                ans += i[0]*i[1];
            }
            else{
                ans += t*i[1];
                break;
            }
        }
        return ans;
    }
};