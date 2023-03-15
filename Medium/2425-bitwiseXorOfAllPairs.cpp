#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    int ans = 0;
    if(n1 % 2 == 0 && n2 % 2 == 0){
        return 0;
    }
    else if(n1 % 2 == 0 && n2 % 2 != 0){
        for(int i = 0; i < n1; i++){
            ans ^= nums1[i];
        }
    }
    else if (n1 % 2 != 0 && n2 % 2 == 0){
        for(int i = 0; i < n2; i++){
            ans ^= nums2[i];
        }
    }
    else{
        int ans1 = 0, ans2 = 0;
        for(int i = 0; i < n1; i++){
            ans1 ^= nums1[i];
        }
        for(int i = 0; i < n2; i++){
            ans2 ^= nums2[i];
        }
        ans = ans1 ^ ans2;
    }
    return ans;
}

int main(){
    vector<int> nums1 = {2,1,3};
    vector<int> nums2 = {10,2,5,0};
    cout<<xorAllNums(nums1, nums2)<<endl;
    return 0;
}