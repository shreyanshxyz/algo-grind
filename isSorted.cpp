#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr, int n, int i){
    if(n <=1){
        return 1;
    }
    if(arr[i] > arr[i+1]){
        return 0;
    } else {
        bool ans = isSorted(arr, n-1, i+1);
    }
}

int main(){
    vector<int> arr{1,2,3,4,4,4};
    int i = 0;
    int n = arr.size();
    cout << isSorted(arr, n, i);
}