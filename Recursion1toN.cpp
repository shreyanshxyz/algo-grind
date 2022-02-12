#include<bits/stdc++.h>
using namespace std;

void oneToN(int n){
    if(n==0){
        return;
    }

    oneToN(n-1);
    cout << "Hello " << n << endl;
}

int main(){
    oneToN(10);
}