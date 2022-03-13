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

            if(left > right || top > bottom) break; // now top row and rightmost row is done so now we move to the bottom row. we put a
            for(i = right; i >= left; i--) { // pointer from the rightmost side at bottom and start traversing to the left. as soon as
                res.push_back(matrix[bottom][i]); // the travesal is done, we move our bottom pointer upward for the new bottom row
            }
            bottom--;
            for(i=bottom; i >= top; i--) { // for the leftmost column we move from the bottom most pointer to the top most through the
                res.push_back(matrix[i][left]); // given iteration. after that we push the leftmost column inside and then continue the
            }
            left++; // continue the same process again till we get the inside most element, that is when the while loop breaks.
        }
        
        return res;
    }
};