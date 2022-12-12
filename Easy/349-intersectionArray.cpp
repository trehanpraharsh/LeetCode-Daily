#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans ={};
    unordered_set<int> arr1;
    unordered_set<int> arr2;
    unordered_map<int,int> sol;
    for(int i = 0; i < nums1.size(); i++){
        arr1.insert(nums1[i]);
    }
    for(int j = 0; j < nums2.size(); j++){
        arr2.insert(nums2[j]);
    }
    for(auto it = arr1.begin(); it != arr1.end(); it++){
        sol[*it]++;
    }
    for(auto it = arr2.begin(); it != arr2.end(); it++){
        sol[*it]++;
    }
    for(auto it = sol.begin(); it != sol.end(); it++){
        if(it->second == 2){
            ans.push_back(it->first);
        }
    }
    return ans;
}

int main(){
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    for(int i = 0; i < intersection(nums1,nums2).size(); i++){
        cout<<intersection(nums1,nums2)[i]<<" ";
    }
    return 0;
}