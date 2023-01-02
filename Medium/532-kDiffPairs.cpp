#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int findPairs(vector<int>& nums, int k) {
    unordered_map <int,int> m;
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    int count = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        if(k == 0){
            if(it->second > 1){
                count++;
            }
        }
        else if(m.find(it->first + k) != m.end()){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 1;
    cout<<findPairs(nums,k)<<endl;
    return 0;
}