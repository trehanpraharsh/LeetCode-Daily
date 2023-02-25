#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[low] <= nums[mid]){
            if(target >= nums[low] && target < nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(target > nums[mid] && target <= nums[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {3,1};
    int target = 1;
    cout<<search(nums, target)<<endl;
    return 0;
}