#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int getCommon(vector<int>& nums1, vector<int>& nums2) {
    unordered_set <int> s1;
    unordered_set <int> s2;
    int n1 = nums1.size();
    int n2 = nums2.size();
    for(int i = 0; i < n1; i++){
        s1.insert(nums1[i]);
    }
    for(int i = 0; i < n2; i++){
        s2.insert(nums2[i]);
    }
    vector<int> res;
    if(n1 >= n2){
        for(int i = 0; i < n1; i++){
            if(s2.find(nums1[i]) != s2.end()){
                res.push_back(nums1[i]);
            }
        }
    }
    else{
        for(int i = 0; i < n2; i++){
            if(s1.find(nums2[i]) != s1.end()){
                res.push_back(nums2[i]);
            }
        }
    }
    if(res.size() == 0){
        return -1;
    }
    sort(res.begin(), res.end());
    return res[0];
}

int main(){
    vector <int> nums1 = {1,2,3,6};
    vector <int> nums2 = {2,3,4,5};
    cout<<getCommon(nums1, nums2)<<endl;
    return 0;
}