#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s;
    for(int i = 0; i < nums.size(); i++){
        s.insert(nums[i]);
    }
    int ans = 0;
    int len;
    for(auto it = s.begin(); it != s.end(); it++){
        if(s.find(*it - 1) == s.end()){
            len = 1;
            while(s.find(*it + len) != s.end()){
                len++;
            }
            ans = max(ans,len);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
    cout<<longestConsecutive(nums)<<endl;
    return 0;
}