class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1 = 0, r2 = n-1;
        int c1 = 0, c2 = n-1;
        int x = 0;
        vector<vector<int>> ans(n, vector<int> (n)); // Our resultant
        while(r1 <= r2 && c1 <= c2){
            for(int i = c1; i <= c2; ++i) 
                ans[r1][i] = ++x; //left to right we move from the starting column to the ending column in the row specified
            for(int i = r1+1; i <= r2; ++i)
                ans[i][c2] = ++x; //we move downwards from the starting row + 1 to the ending one in the column specified
				
            // for moving right to left
            if(r1 < r2 && c1 < c2)
            {
                for(int i = c2-1; i>c1; --i)
                    ans[r2][i] = ++x; // we move right to left from the (last column currently) - 1 to the starting column for our row  
					for(int i = r2; i>r1; --i) 
                    ans[i][c1] = ++x; // we move bottom to top from (last row currently) - 1 to the starting row
            }
            ++r1;
            --r2;
            ++c1;
            --c2;

    }
        return ans;
    }
};