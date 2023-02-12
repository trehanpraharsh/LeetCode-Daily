#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

long long findTheArrayConcVal(vector<int>& nums) {
    if(nums.size() == 1){
        return nums[0];
    }
    int low = 0;
    int high = nums.size() - 1;
    long long ans = 0;
    string res;
    long long num = 0;
    while(low<=high){
        if(low == high){
            ans += nums[low];
            return ans;
        }
        res = "";
        num = 0;
        string l = to_string(nums[low]);
        string h = to_string(nums[high]);
        res = l + h;
        num = (long long)(stoi(res));
        ans += num;
        low++;
        high--;
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,52,31};
    cout<<findTheArrayConcVal(nums)<<endl;
    return 0;
}