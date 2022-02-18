#include<bits/stdc++.h>
using namespace std;

int factO(int n){
    if (n == 1){
        return 1;
    }
    
    return factO(n-1) * n;
}

int main(){
    cout << factO(6);
}