#include<bits/stdc++.h>
using namespace std;

int oneToN(int n){
    if(n==0){
        return 0;
    }

    int x = oneToN(n-1);
    return x + n;
}

int main(){
    cout << oneToN(10);
}