#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map <int,int> m1;
    unordered_map <int,int> m2;
    for(int i = 0; i < nums1.size(); i++){
        m1[nums1[i]]++;
    } 
    for(int i = 0; i < nums2.size(); i++){
        m2[nums2[i]]++;
    }
    vector<int> ans = {};
    if(nums1.size() > nums2.size()){
        for(int i = 0; i < nums2.size(); i++){
            if(m1.find(nums2[i]) != m1.end() && m1.at(nums2[i]) > 0){
                m1.at(nums2[i])--;
                ans.push_back(nums2[i]);
            }
        }
    }
    else{
        for(int i = 0; i < nums1.size(); i++){
            if(m2.find(nums1[i]) != m2.end() && m2.at(nums1[i]) > 0){
                m2.at(nums1[i])--;
                ans.push_back(nums1[i]);
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    for(int i = 0; i < intersect(nums1, nums2).size(); i++){
        cout<<intersect(nums1, nums2)[i]<<" ";
    }
    cout<<endl;
    return 0;
}