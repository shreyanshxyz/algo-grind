#include<bits/stdc++.h>
using namespace std;

void sayd(vector<string> &names, int n){
    if(n==0){
        return;
    }
    int r=n/10;
    n = n%10;
    cout << names[n] << " ";
    sayd(names, r);
}

int main(){

    vector<string> names{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayd(names, 212);
}