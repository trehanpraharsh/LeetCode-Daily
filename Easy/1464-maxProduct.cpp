#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int maxNum(vector<int> &nums){
    int maxEle = nums[0];
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > maxEle){
            maxEle = nums[i];
        }
    }
    return maxEle;
}
    
int maxProduct(vector<int>& nums) {
    int a = maxNum(nums);
    for(int j = 0; j < nums.size(); j++){
        if(nums[j] == a){
            nums[j] = -1;
            break;
        }
    }
    int b = maxNum(nums);
    return ((a-1)*(b-1));
}

int main(){
    vector<int> nums = {3,4,5,2};
    cout<<maxProduct(nums);
    return 0;
}