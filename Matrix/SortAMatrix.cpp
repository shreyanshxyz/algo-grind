class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> m) {
        // code here
        vector <int> sorting;
        int x = 0;
        
        int r = m.size(), c = m[0].size();
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                sorting.push_back(m[i][j]);
            }
        }
        
        sort(sorting.begin(), sorting.end());
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                m[i][j] = sorting[x++];
            }
        }
        
        return m;
    }
};
