class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // we have two variables, "fin" is for the max no of 1's and rowNo is the the row with max 1's
	    int fin = 0;
	    int rowNo = -1;
	    for(int i = 0; i < n; i++){
	        int count = 0; // we iterate through the array and set our count variable as zero for every row.
	        for(int j = 0; j < m; j++){
	            
	            if(arr[i][j] == 1){
	                count++; // for every element being 1 in that row, we simply increment count by 1.
	            }
	            
	        }
	        if(count > fin){ // as soon as the iteration of the current row is done, before moving to the second row, we compare count
	            fin == count; // to our fin variable. If the current count is bigger than the previous biggest count, we update it
	            rowNo = i; // and set out rowNo as the current row. Then we move to iterate the next row.
	        }
	        
	    }
	return rowNo;
	}
};