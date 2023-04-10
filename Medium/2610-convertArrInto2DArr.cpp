#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<vector<int>> findMatrix(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> x;
    unordered_map <int,int> m;
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    vector<int> counts;
    for(auto it = m.begin(); it != m.end(); it++){
        counts.push_back(it->second);
    }
    sort(counts.begin(),counts.end(),greater<int>());
    int a = counts[0];
    while(a != 0){
        for(auto &it : m){
            if(it.second > 0){
                x.push_back(it.first);
                it.second--;
            }
        }
        ans.push_back(x);
        x.clear();
        a--;
    }
    return ans;
}

int main(){
    vector<int> nums = {1,3,4,1,2,3,1};
    for(int i = 0; i < findMatrix(nums).size(); i++){
        for(int j = 0; j < findMatrix(nums)[i].size(); i++){
            cout<<findMatrix(nums)[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}