// CODE
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0; // beginning of the rows
        int right = matrix[0].size()-1; // ending of the rows
        int top = 0; // beginning of the columns 
        int bottom = matrix.size()-1; // ending of the columns
        vector<int> res;
        int i;

        while(left <= right and top <= bottom) { // we iterate till we reach the end of spiral
            for(i = left; i <= right; i++) {    // ye pehli row ka iteration hai left se right. jaise hi poora iteration hoga 
                res.push_back(matrix[top][i]);  // vaise hi vo top waala pointer +1 hojaega taaki we move to the lower row
            }
            top++;

            for(i = top; i <= bottom; i++) {   // dekho upar waali row ho hi gayi hai, now we move to the columns on the right side
                res.push_back(matrix[i][right]); // we push back every rightmost element from the updated top element.
            }                                    // jaise hi complete hojae top to bottom, rightmost row is done so we move inside by  
            right--;                            // right--

            if(left > right || top > bottom) break;
            for(i = right; i >= left; i--) {
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
            for(i=bottom; i >= top; i--) {
                res.push_back(matrix[i][left]);
            }
            left++;
        }
        
        return res;
    }
};