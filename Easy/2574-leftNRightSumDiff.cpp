#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> leftRigthDifference(vector<int>& nums) {
    vector<int> leftSum;
    vector<int> rightSum;
    int sum = 0;
    leftSum.push_back(sum);
    for(int i = 0; i < nums.size() - 1; i++){
        sum += nums[i];
        leftSum.push_back(sum);
    }
    sum = 0;
    rightSum.push_back(sum);
    for(int i = nums.size() - 1; i > 0; i--){
        sum += nums[i];
        rightSum.push_back(sum);
    }
    reverse(rightSum.begin(), rightSum.end());
    vector<int> ans(nums.size());
    for(int i = 0; i < nums.size(); i++){
        ans[i] = abs(leftSum[i] - rightSum[i]);
    }
    return ans;
}

int main(){
    vector<int> nums = {10,4,8,3};
    for(int i = 0; i < leftRigthDifference(nums).size(); i++){
        cout<<leftRigthDifference(nums)[i]<<" ";
    }
    cout<<endl;
    return 0;
}