#include<bits/stdc++.h>
using namespace std;

void printAns(vector < vector < int >> & ans) {
  cout << "The unique subsets are " << endl;
  cout << "[ ";
  for (int i = 0; i < ans.size(); i++) {
    cout << "[ ";
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout << "]";
  }
  cout << " ]";
}

class Solution {
private:
    void solve(vector<int> &nums, vector<int>&op, int index, vector<vector<int>> &ans){
        if(index == nums.size()){
            sort(op.begin(), op.end());
            ans.push_back(op);
            return;
        }
        
        // exclude
        solve(nums, op, index+1, ans);
        
        // include
        int el = nums[index];
        op.push_back(el);
        solve(nums, op, index+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>op;
        int index = 0;
        solve(nums, op, index, ans);
        return ans;
    }
};

int main(){
    vector <int> a{1,2,3};
    Solution s;
    vector < vector < int >> ans = s.subsets(a);
    printAns(ans);
}