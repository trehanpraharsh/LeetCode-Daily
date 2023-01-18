#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int countTriplets(vector<int>& nums) {
    unordered_map <int,int> m;
    for(auto x:nums)
    {
        for(auto y:nums)
        {
            m[(x&y)]++;
        }
    }
    int ans=0;
    for(auto x:m)
    {
        for(auto y:nums)
        {
            if((x.first&y)==0)
            ans+=x.second;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,1,4};
    cout<<countTriplets(nums)<<endl;
    return 0;
}