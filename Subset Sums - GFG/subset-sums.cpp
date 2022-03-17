// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void subsetSum(int index, int sum, vector<int> &arr, int N, vector<int> &total){
        if(index == N){
            total.push_back(sum);
            return;
        }
        
        subsetSum(index + 1, sum + arr[index], arr, N, total);
        
        subsetSum(index + 1, sum, arr, N, total);
    }

public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> total;
        subsetSum(0, 0, arr, N, total);
        sort(total.begin(), total.end());
        return total;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends