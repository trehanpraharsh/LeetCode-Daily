#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int pivotIndex(vector<int>& nums){
    int sum = 0;
    vector<int> ans1 = {};
    vector<int> ans2 = {};
    for(int i = 0; i < nums.size(); i++){
        sum+=nums[i];
        ans1.push_back(sum);
    }
    sum = 0;
    for(int j = nums.size() - 1; j >= 0; j--){
        sum += nums[j];
        ans2.push_back(sum);
    }
    reverse(ans2.begin(),ans2.end());
    for(int k = 0; k < nums.size(); k++){
        if(ans1[k] == ans2[k]){
            return k;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,7,3,6,5,6};
    cout<<pivotIndex(nums);
    return 0;
}