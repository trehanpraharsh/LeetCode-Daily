#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=1;i<=nums.size();i++){
        m[i]=0;
    }
    for(int i=0;i<nums.size();i++){
        m[nums[i]]=1;
    }
    for(int i=1;i<=nums.size();i++){
        if(m[i]==0){
            ans.push_back(i);
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    for(int i = 0; i < findDisappearedNumbers(nums).size(); i++){
        cout<<findDisappearedNumbers(nums)[i]<<" ";
    }
    cout<<endl;
    return 0;
}