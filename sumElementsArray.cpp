#include<bits/stdc++.h>
using namespace std;

int sumEle(vector<int> arr, int n){
    if(n == 0){
        return 0;
    }
    
    int sum = arr[n-1] + sumEle(arr, n-1);
    return sum;
}

int main(){
    vector<int> arr{1,2,3,4,4,4, 7, 5, 10};
    int n = arr.size();
    cout << sumEle(arr, n);
}