#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

long long maximumSubarraySum(vector<int>& nums, int k) {
    unordered_map <int, int> m;
    long long sum = 0;
    long long ans = 0;
    for(int i = 0; i < k; i++){
        sum += nums[i];
        m[nums[i]]++; 
    }
    if(m.size() == k){
        ans = sum;
    }
    for(int i = k; i < nums.size(); i++){
        sum = sum - nums[i-k] + nums[i];
        m[nums[i]]++;
        m[nums[i-k]]--;
        if(m[nums[i-k]] == 0){
            m.erase(nums[i-k]);
        }
        if(m.size() == k){
            ans = max(ans, sum);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {9,9,9,1,2,3};
    int k = 3;
    cout<<maximumSubarraySum(nums ,k)<<endl;
    return 0;
}