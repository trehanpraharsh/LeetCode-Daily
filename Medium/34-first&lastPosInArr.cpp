#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            res.push_back(i);
        }
    }
    vector<int> ans;
    if(res.size() == 0){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    if(res.size() == 1){
        ans.push_back(res[0]);
        ans.push_back(res[0]);
        return ans;
    }
    ans.push_back(res[0]);
    ans.push_back(res[res.size() - 1]);
    return ans;
}

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    for(int i = 0; i < searchRange(nums, target).size(); i++){
        cout<<searchRange(nums, target)[i]<<endl;
    }
    return 0;
}