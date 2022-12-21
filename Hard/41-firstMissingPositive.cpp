#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <set>
#include <unordered_map>
using namespace std;

long firstMissingPositive(vector<int>& nums) {
    int cal = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]<=0){
            cal++;
        }
    }
    if(cal == nums.size()){
        return 1;
    }
    set<int> s;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]>0){
            s.insert(nums[i]);   
        }
    }
    vector<int> ans = {};
    for(auto it = s.begin(); it != s.end(); it++){
            ans.push_back(*it);
    }
    long res = 0;
    int count = 1;
    for(int i = 1; i < ans.size(); i++){
        if(ans[i] - ans[i-1] != 1){
            res = min(ans[i], ans[i-1]) + 1;
            break;
        }
        else{
            count++;
        }
    }
    if(ans.size() == 1){
        if(ans[0] != 1){
            res = 1;
        }
        else{
            res = ans[0] + 1;
        }
    }
    else if(count == ans.size()){
        res = ans[ans.size() - 1] + 1;
    }
    if(ans[0]!=1){
        res = 1;
    }
    return res;
}


int main(){
    vector<int> nums = {-1,2,4,7,-9,0};
    cout<<firstMissingPositive(nums);
    return 0;
}