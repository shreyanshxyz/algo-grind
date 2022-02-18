#include<bits/stdc++.h>
using namespace std;

int binaryS(vector<int> &a, int k, int s, int e){
    if(s > e){
        return 0;
    }
    
    int mid = (s + e)/2;
    // cout << mid << endl;

    if(a[mid] == k){
        return 1;
    }

    if(k > a[mid]){
        return binaryS(a, k, mid + 1, e);
    } if (k < a[mid]) {
        return binaryS(a, k, s, mid-1);
    }
}

int main(){
    vector <int> a{1,2,3,4,5,6,7,8,9,10};
    int k = 102;
    cout << binaryS(a, k, 0, 9);
}