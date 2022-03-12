#include<bits/stdc++.h>
using namespace std;


int mostFrequent(vector<int>& nums, int key) {
    int count = 0, target;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == key){
            nums[i+1] = target;
            if(nums[i] == target){
            count++;
        }
        }
    }
    return count;
}

int main(){
    int key = 1;
    vector <int>mf = {1, 100, 200, 1, 100};
    mostFrequent(mf, key);
}