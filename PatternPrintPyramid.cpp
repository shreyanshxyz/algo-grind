#include<bits/stdc++.h>
using namespace std;

int patterN(int n){

    if(n == 0){
        return 0;
    }
    // cout << n << " \n";
    patterN(n-1);
    // cout << n << " \n";
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << " \n";
}

int main(){
    cout << patterN(6);
}