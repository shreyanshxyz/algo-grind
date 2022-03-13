// Rotate it Clockwise

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        for(int i = 0; i < n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

// Rotate Anti Clockwise
void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int n = matrix.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            swap(matrix[i][j], matrix[j][i]);
            }
        }
        int i = 0; 
        int j = n - 1;
        while(i < j){
            swap(matrix[i], matrix[j]);
            i++;
            j--;
        }
}