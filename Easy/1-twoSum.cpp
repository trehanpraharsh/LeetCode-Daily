#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int,int> m;
    vector<int> ans = {};
    for(int i = 0; i < nums.size(); i++){
        m.insert({nums[i],i});
    }
    for(int i = 0; i < nums.size(); i++){
        int diff = target - nums[i];
        if(m.find(diff) != m.end() && m[diff] != i){
            ans.push_back(i);
            ans.push_back(m.at(diff));
            break;
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    for(int i = 0; i < twoSum(nums,target).size(); i++){
        cout<<twoSum(nums,target)[i]<<" ";
    }
    cout<<endl;
    return 0;
}