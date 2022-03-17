class Solution {
public:
    void cSm(int ind, int target, vector<int> &arr, vector<vector<int>> &fin, vector<int> &sub){
        if(ind == arr.size()){
            if (target == 0){
                fin.push_back(sub);
            }
            return;
        }
        
        if(arr[ind] <= target){
            sub.push_back(arr[ind]);
            cSm(ind, target - arr[ind], arr, fin, sub);
            sub.pop_back();
        }
        cSm(ind+1, target, arr, fin, sub);
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> fin;
        vector<int> sub;
        cSm(0, target, candidates, fin, sub);
        return fin;
    }
};