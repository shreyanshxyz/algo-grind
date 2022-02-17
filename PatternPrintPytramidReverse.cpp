#include<bits/stdc++.h>
using namespace std;

int patterN(int n){

    if(n == 0){
        return 0;
    }
    for(int i = 1; i <= n; i++){
    cout << i << " ";
    }
    cout << " \n";
    patterN(n-1);
}

int main(){
    cout << patterN(6);
}