#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    unordered_map <int,int> m;
    vector<int> ans = {};
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second == 2){
            ans.push_back(it->first);
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    for(int i = 0; i < findDuplicates(nums).size(); i++){
        cout<<findDuplicates(nums)[i]<<" ";
    }
    return 0;
}