#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        //Checking the boundary conditions, i.e. if mid is at the start or at the end
        if((mid == 0 || nums[mid] >= nums[mid - 1]) &&
         (mid == nums.size() - 1 || nums[mid] >= nums[mid + 1])){
            return mid;
        }
        //If the element is greater on the left side then the solution
        //will definitely lie on the left side
        if(mid > 0 && nums[mid - 1] >= nums[mid]){
            high = mid - 1;
        }
        //Else the greater element is on the right, so it'll lie on the right
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,1,3,5,6,4};
    cout<<findPeakElement(nums)<<endl;
    return 0;
}