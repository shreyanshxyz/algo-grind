#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(string &s, int l, int r){
    if(l >= r){
        return true;
    }

    if(s[l] != s[r]){
        return false;
    }
        palindromeCheck(s, l+1, r-1);
}

int main(){
    string s = "madam";
    int l = 0;
    int r = s.size() -1;
    cout << palindromeCheck(s, l, r);
}