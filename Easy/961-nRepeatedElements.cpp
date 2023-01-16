#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int repeatedNTimes(vector<int>& nums) {
    unordered_map <int,int> m;
    int n = nums.size() / 2;
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    int ans = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second == n){
            ans = it->first;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {5,1,5,2,5,3,5,4};
    cout<<repeatedNTimes(nums)<<endl;
    return 0;
}