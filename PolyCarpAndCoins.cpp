#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;

        int x,y;
        if (n%3 == 0){
            x = y = n/3;
            cout << y << " "<< x << endl;
        }
        else if(n%3 == 1){
            x = n/3;
            y = x + 1;
            cout << y << " "<< x << endl;
        }
        else if(n%3 == 2){
            y = n/3;
            x = y + 1;
            cout << y << " "<< x << endl;
        }
    }
}