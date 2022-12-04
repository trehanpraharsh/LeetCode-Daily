#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int calcMin(vector<long long>& ans){
    int min = 0;
    for(int k = 0; k < ans.size(); k++){
        if(ans[k] < ans[min]){
            min = k;
        }
    }
    return min;
}
    
int minimumAverageDifference(vector<int>& nums) {
    if(nums.size() == 1){
        return 0;
    }
    vector<long long> ans = {};
    vector<long long> prefixSum = {};
    long long sum = 0;
    int n = nums.size();
    long long diff = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
        prefixSum.push_back(sum);
    }
    for(int j = 0; j < n; j++){
        if(j == n-1){
            diff = prefixSum[j] / (j+1);
            ans.push_back(abs(diff));
            continue;
        }
        diff = ((prefixSum[j]) / (j+1)) - ((prefixSum[n-1] - prefixSum[j])/ (n-j-1));
        ans.push_back(abs(diff));
    }
    int res = calcMin(ans);
    return res;
}

int main(){
    vector<int> nums = {2,5,3,9,5,3};
    cout<<minimumAverageDifference(nums);
    return 0;
}