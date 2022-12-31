#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int findMin(vector<int>& nums){
    int min = nums[0];
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < min){
            min = nums[i];
        }
    }
    return min;
}

int findMax(vector<int>& nums){
    int max = nums[0];
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    return max;
}

vector<int> findErrorNums(vector<int>& nums) {
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
    int sum = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        sum += it->first; 
    }
    int minNum = findMin(nums);
    int maxNum = findMax(nums);
    if(minNum != 1){
        ans.push_back(1);
        return ans;
    }
    int sumIns = 0;
    if(minNum != maxNum){
        for(int i = minNum; i <= maxNum; i++){
            sumIns += i;
        }
        if(sumIns == sum){
            ans.push_back(maxNum + 1);
            return ans;
        }
        ans.push_back(sumIns - sum);
    }
    else{
        ans.push_back(maxNum + 1);
    }
    return ans;
}


int main(){
    vector<int> nums = {1,5,3,2,2,7,6,4,8,9};
    for(int i = 0; i < findErrorNums(nums).size(); i++){
        cout<<findErrorNums(nums)[i]<<" ";
    }
    cout<<endl;
    return 0;
}