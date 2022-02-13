#include<bits/stdc++.h>
using namespace std;

int sumDigits(int n){
    if(n == 0){
        return 0;
    }

    int lastDigit = n % 10;
    int remainder = n / 10;
    return sumDigits(lastDigit+ remainder);
}

int main(){
    cout << sumDigits(99);
}