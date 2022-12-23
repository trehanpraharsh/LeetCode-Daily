#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map <int,int> m;
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    int count = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second >= 2){
            continue;
        }
        count++;
    }
    if(count != m.size()){
        return true;
    }
    return false;
}


int main(){
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    cout<<containsDuplicate(nums)<<endl;
    return 0;
}