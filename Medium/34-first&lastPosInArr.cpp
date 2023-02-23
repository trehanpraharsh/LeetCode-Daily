#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int firstOcc(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] > target){
            high = mid - 1;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            if(mid == 0 || nums[mid] != nums[mid - 1]){
                return mid;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int lastOcc(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] > target){
            high = mid - 1;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            if(mid == nums.size() - 1 || nums[mid] != nums[mid + 1]){
                return mid;
            }
            else{
                low = mid + 1;
            }
        }
    }
    return -1;
}

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
    int firstOccurence = firstOcc(nums, target);
    int lastOccurence = lastOcc(nums, target);
    ans.push_back(firstOccurence);
    ans.push_back(lastOccurence);
    return ans;
}

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    for(int i = 0; i < searchRange(nums, target).size(); i++){
        cout<<searchRange(nums, target)[i]<<endl;
    }
    return 0;
}