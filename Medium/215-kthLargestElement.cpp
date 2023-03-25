#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <queue>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue <int> pq(nums.begin(), nums.
    end());
    while(--k){
        pq.pop();
    }
    return (pq.top());
}

int main(){
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    int k = 4;
    cout<<findKthLargest(nums, k)<<endl;
    return 0;
}