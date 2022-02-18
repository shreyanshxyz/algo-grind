#include<bits/stdc++.h>
using namespace std;

int ntoOne(int n){
    if(n == 1){
        return 1;
    }

    cout << n << " ";
    ntoOne(n-1);
}

int main(){
    cout << ntoOne(7);
}