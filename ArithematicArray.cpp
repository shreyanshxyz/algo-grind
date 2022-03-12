#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        vector<int> arr;
        for(int i = 0; i<n; i++){
            int elm;
            cin >> elm;
            arr.push_back(elm);
            sum += arr[i];
        }
        cout << sum - n;
    }
}