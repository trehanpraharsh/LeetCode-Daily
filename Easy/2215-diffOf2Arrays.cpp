#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    vector<vector<int>> ans;
    vector<int> ans1, ans2;
    unordered_set <int> s1;
    unordered_set <int> s2;
    for(int i = 0; i < nums1.size(); i++){
        s1.insert(nums1[i]);
    }
    for(int i = 0; i < nums2.size(); i++){
        s2.insert(nums2[i]);
    }
    for(auto it = s1.begin(); it != s1.end(); it++){
        if(s2.find(*it) == s2.end()){
            ans1.push_back(*it);
        }
    }
    for(auto it = s2.begin(); it != s2.end(); it++){
        if(s1.find(*it) == s1.end()){
            ans2.push_back(*it);
        }
    }
    ans.push_back(ans1);
    ans.push_back(ans2);
    return ans;
}

int main(){
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,4,6};
    for(int i = 0; i < findDifference(nums1, nums2).size(); i++){
        cout<<"[";
        for(int j = 0; j < findDifference(nums1, nums2)[i].size(); j++){
            cout<<findDifference(nums1, nums2)[i][j]<<",";
        }
        cout<<"]";
    }
    cout<<endl;
    return 0;
}