#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = 0;
        int y;
        int x = n + n;
        for(int i=0; i<x; i++){
            cin >> y;
            if(y%2 != 0){
                flag++;
            } 
        }
        if(flag == n){
            cout << "YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}