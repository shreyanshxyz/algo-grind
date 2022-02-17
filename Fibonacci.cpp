#include<bits/stdc++.h>
using namespace std;

int fiboN(int n){
    if(n == 1){
        return 0;
    }

    if(n==2){
        return 1;
    }

    return fiboN(n-1) + fiboN(n-2);
}

int main(){
    cout << fiboN(11);
}