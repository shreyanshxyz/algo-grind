class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> m) {
        // code here
        vector <int> sorting; // a new data structure for storing our sorted matrix elements
        int x = 0;  // we initialise a variable to 0 so that when we traverse the matrix we also traverse our data structure without
                    // any resets
        
        int r = m.size(), c = m[0].size();
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                sorting.push_back(m[i][j]); // iteration through our matrix and pushing its elements into our DS. 
            }
        }
        
        sort(sorting.begin(), sorting.end()); // sorting our DS
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                m[i][j] = sorting[x++]; // now we insert our sorted data structure's values into our matrix using this loop
            }
        }
        
        return m;
    }
};
