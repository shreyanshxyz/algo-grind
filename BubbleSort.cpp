#include<bits/stdc++.h>
using namespace std;

void bSort(vector<int> &arr, int n){
    if(n <= 0){
        return;
    }
    for(int i = 0; i < n -1; i++){
        if(arr[i] >arr[i+1])
            swap(arr[i], arr[i+1]);
        }
    bSort(arr, n-1);
}

int main(){
    vector<int> arr{1,2,3,6,4,5,1,2,1,1,1,0};
    int n = arr.size();

    bSort(arr, n);

    for(int i = 0; i<n; i++){
        cout << arr[i];
    }
}