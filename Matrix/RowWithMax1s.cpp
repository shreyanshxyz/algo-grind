class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int fin = 0;
	    int rowNo = -1;
	    for(int i = 0; i < n; i++){
	        int count = 0;
	        for(int j = 0; j < m; j++){
	            
	            if(arr[i][j] == 1){
	                count++;
	            }
	            
	        }
	        if(count > fin){
	            fin == count;
	            rowNo = i;
	        }
	        
	    }
	return rowNo;
	}
};