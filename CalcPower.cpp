#include<bits/stdc++.h>
using namespace std;

int calcP(int a, int b){
    if (a == 0){
        return 0;
    }

    if(b == 0){
        return 1;
    }

    int pow = a * calcP(a, b - 1);
    return pow;
}

int main(){
    cout << calcP(32, 4);
}