#include<bits/stdc++.h>
using namespace std;

int linearS(vector<int> &arr, int n, int x){
    if(n == 0){
        return 0;
    }

    if(arr[n-1] == x){
        return 1;
    }
    else{
        linearS(arr, n-1, x);
    }
}

int main(){
    vector<int> arr{3,5,1,2,6};
    int x = 7;
    int n = arr.size();
    cout << linearS(arr, n, x);
}