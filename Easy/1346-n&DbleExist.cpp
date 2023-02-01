#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    unordered_map<int,int> m;
    for(int i = 0; i < arr.size(); i++){
        m[arr[i]]++;
    }
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0 && m[arr[i]] > 1){
            return true;
        }
        if(m.find(arr[i]*2) != m.end() && arr[i] != 0){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {-2,0,10,-19,4,6,-8};
    cout<<checkIfExist(arr)<<endl;
    return 0;
}