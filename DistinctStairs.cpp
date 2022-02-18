#include<bits/stdc++.h>
using namespace std;

int stairs(int n){
    if(n < 0){
        return 0;
    }

    if(n==0){
        return 1;
    }

    int ans = stairs(n-1) + stairs(n-2);
    return ans;
}

int main(){
    cout << stairs(2);
}