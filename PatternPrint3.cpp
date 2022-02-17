#include<bits/stdc++.h>
using namespace std;

int patterN(int n){

    if(n == 1){
        cout << 1 << "\n";
        return n;
    }
    for(int i = 1; i <= n; i++){
    cout << i << " ";
    }
    cout << " \n";
    patterN(n-1);
        for(int i = 1; i <= n; i++){
    cout << i << " ";
    }
    cout << " \n";
}

int main(){
    cout << patterN(6);
}