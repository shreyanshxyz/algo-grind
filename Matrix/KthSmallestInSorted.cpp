// Brute
class Solution {
    // the brute force solution is simple and it should be self explanatory. We have to find out the K'th smallest element in a sorted
    // matrix.
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
          vector<int> ans;
  int r = mat.size(), c = mat[0].size();
  for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
          ans.push_back(mat[i][j]);
      }
  }
  
  sort(ans.begin(), ans.end());
  
  return ans[k-1];
    }
};

// Optimal 
