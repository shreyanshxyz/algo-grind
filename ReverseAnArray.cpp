#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int l, int r){
    if (l >= r){
        return;   
    }
    
    swap(arr[l], arr[r]);    
    reverseArray(arr, l+1, r-1);
    
}


int main(){
    vector<int>arr{1,2,3,4,5,6};
    int l = 0;
    int r = arr.size() - 1;
    cout << l << " " << r << "\n";
    reverseArray(arr, l, r);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
}