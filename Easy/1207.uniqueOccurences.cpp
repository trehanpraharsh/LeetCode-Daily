#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
    unordered_map <int, int> val;
    unordered_set <int> count;
    unordered_set <int> dist;
    for(int i = 0; i < arr.size(); i++){
        val[arr[i]]++;
        dist.insert(arr[i]);
    }
    for(auto it = val.begin(); it != val.end(); it++){
        count.insert(it->second);
    }
    if(dist.size() == count.size()){
        return true;
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,2,1,1,3};
    cout<<uniqueOccurrences(nums)<<endl;
    return 0;
}