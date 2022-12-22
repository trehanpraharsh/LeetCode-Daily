#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    unordered_map <int,int> m;
    vector<int> ans ={};
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    int condition = floor(nums.size()/3);
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second > condition){
            ans.push_back(it->first);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4,3,4,3,4};
    for(int i = 0; i < majorityElement(nums).size(); i++){
        cout<<majorityElement(nums)[i]<<" ";
    }
    cout<<endl;
    return 0;
}