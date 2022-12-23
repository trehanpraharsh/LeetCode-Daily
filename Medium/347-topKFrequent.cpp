#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <map>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    map <int,int> m1;
    for(int i = 0; i < nums.size(); i++){
        m1[nums[i]]++;
    }
    vector<int> counts = {};
    for(auto it = m1.begin(); it != m1.end(); it++){
        counts.push_back(it->second);
    }
    sort(counts.begin(),counts.end());
    reverse(counts.begin(),counts.end());
    vector<int> ans = {};
    int a = 0;
    while(ans.size() != k){
        for(auto it = m1.begin(); it != m1.end(); it++){
            if(it->second == counts[a] && a < k){
                ans.push_back(it->first);
                a++;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3,2,3,1,2,4,5,5,6,7,7,8,2,3,1,1,1,10,11,5,6,2,4,7,8,5,6};
    int k = 10;
    for(int i = 0; i < topKFrequent(nums,k).size(); i++){
        cout<<topKFrequent(nums,k)[i]<<" ";
    }
    cout<<endl;
    return 0;
}