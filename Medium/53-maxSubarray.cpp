#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int findMax(vector<int> nums){
    int max = nums[0];
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    return max;
}

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> maxEnding(n);
    maxEnding[0] = nums[0];
    for(int i = 1; i < n; i++){
        maxEnding[i] = max(maxEnding[i-1] + nums[i], nums[i]);
    }
    return findMax(maxEnding);
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums)<<endl;
    return 0;
}