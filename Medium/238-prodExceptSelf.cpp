#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n);
    vector<int> right(n);
    vector<int> ans(n);
    left[0] = 1;
    for(int i = 1; i < n; i++){
        left[i] = left[i-1] * nums[i-1];
    }
    right[n - 1] = 1;
    for(int j = n - 2; j>=0; j--){
        right[j] = right[j+1] * nums[j+1];
    }
    for(int k = 0; k < n; k++){
        ans[k] = left[k] * right[k];
    }
    return ans;
}

int main(){
    vector<int> nums  = {1,2,3,4};
    for(int a = 0; a < productExceptSelf(nums).size(); a++){
        cout<<productExceptSelf(nums)[a]<<" ";
    }
    return 0;
}