#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int findMaxLength(vector<int>& nums) {
    unordered_map <int,int> m;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            nums[i] = -1;
        }
    }
    int sum = 0;
    int ans;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        if(sum == 0){
            ans = i + 1;
        }
        if(m.find(sum) == m.end()){
            m.insert({sum,i});
        }
        if(m.find(sum) != m.end()){
            ans = max(ans, i-m[sum]);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {0,1,1,0,1,1,1,0};
    cout<<findMaxLength(nums)<<endl;
    return 0;
}