#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <queue>
using namespace std;

int thirdMax(vector<int>& nums) {
    unordered_set <int> s;
    for(int i = 0; i < nums.size(); i++){
        s.insert(nums[i]);
    }
    priority_queue<int> pq(s.begin(), s.end());
    if(s.size() < 3){
        return pq.top();
    }
    int k = 3;
    while(--k){
        pq.pop();
    }
    int ans = pq.top();
    return ans;
}

int main(){
    vector<int> nums = {2,2,3,1};
    cout<<thirdMax(nums)<<endl;
    return 0;
}