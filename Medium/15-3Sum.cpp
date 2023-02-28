#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> x;
    for(int i = 0; i < nums.size() - 2; i++){
        if(i > 0 && nums[i] == nums[i - 1]){
            continue;
        }
        int target = -nums[i];
        int j = i + 1;
        int k = nums.size() - 1;
        x = {};
        while(j < k){
            if(nums[j] + nums[k] == target){
                x.push_back(nums[i]);
                x.push_back(nums[j]);
                x.push_back(nums[k]);
                ans.push_back(x);
                x = {};
                while ( j< k && nums[j]==nums[j+1]){
                    j++;
                } 
                while (j < k && nums[k]==nums[k-1]){
                    k--;
                }
                j++;
                k--;
            }
            else if(nums[j] + nums[k] < target){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    for(int i = 0; i < threeSum(nums).size(); i++){
        cout<<"{";
        for(int j = 0; j < threeSum(nums)[i].size(); j++){
            cout<<threeSum(nums)[i][j]<<" ";
        }
        cout<<"}, ";
    }
    return 0;
}