// Brute Force

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        // a basic brute force approach where we traverse through the matrix and see if the element exists.
        for(int i = 0; i < r; i++){
            for(int j = i; j < c; j++){
                if (matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};

// TC === o(n x m)
// SC === O(1)

// ---------------------------------------------------------------------------------------------------------------------------------

// Better

    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // this is our better approach. since the matrix is sorted row & column wise. Dry running will give a clearer idea.
        int i = 0, j = matrix.size() - 1; // we take I as the first element of each row and j as the last one.
        while(i >= 0 && j >= 0 && j < m && i < n){
            if(matrix[i][j] == x){ // if the current element is equal to our value we return true.
                return 1;
            }
            if(matrix[i][j] > x){ // if it is smaller then we move a column to the right and check again 
                j--;
            }
            else{ // but in case if it is smaller we then move a row lower and then check again. 
                i++;
            }
        }
        return 0;
    }

//  Optimal (Binary Search)