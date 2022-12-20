#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int findMax(vector<int>& nums){
    int max = nums[0];
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    return max;
}

int findMin(vector<int>& nums){
    int min = nums[0];
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < min){
            min = nums[i];
        }
    }
    return min;
}

int missingNumber(vector<int>& nums) {
    int maxNum = findMax(nums);
    int minNum = findMin(nums);
    int sum = 0;
    int sumAns = 0;
    for(int i = 0; i < nums.size(); i++){
        sum+=nums[i];
    }
    for(int j = 0; j <= maxNum; j++){
        sumAns+=j;
    }
    int ans = sumAns - sum;
    if(sum==sumAns){
        if(minNum != 0){
            ans = 0;
        }
        else{
            ans = maxNum + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(nums)<<endl;
    return 0;
}