#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map <int,int> m;
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    int condition = floor(nums.size()/2);
    int ans = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second > condition){
            ans = it->first;
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<majorityElement(nums)<<endl;
    return 0;
}