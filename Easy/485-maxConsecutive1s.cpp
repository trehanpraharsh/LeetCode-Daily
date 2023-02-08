#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int ans = 0;
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1){
            count++;
        }
        if(nums[i] != 1){
            count = 0;
        }
        ans = max(ans, count);
    }
    return ans;
}

int main(){
    vector<int> nums = {1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums)<<endl;
    return 0;
}