#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 0;
    cout<<searchInsert(nums, target)<<endl;
    return 0;
}