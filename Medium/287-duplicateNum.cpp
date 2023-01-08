#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int findDuplicate(vector<int>& nums) {
    unordered_map <int,int> m;
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    int ans;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second > 1){
            ans = it->first;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3,1,3,4,2};
    cout<<findDuplicate(nums)<<endl;
    return 0;
}