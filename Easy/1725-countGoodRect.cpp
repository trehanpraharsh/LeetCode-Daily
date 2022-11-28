#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int findMax(vector<int> &nums){
    int max = nums[0];
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    return max;
}
    
int findMin(vector<int> &nums){
    int min = nums[0];
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] < min){
            min = nums[1];
        }
    }
    return min;
}
    
int countGoodRectangles(vector<vector<int>>& rectangles) {
    vector<int> ans = {};
    for(int j = 0; j < rectangles.size(); j++){
        ans.push_back(findMin(rectangles[j]));
    }
    int res = findMax(ans);
    int count = 0;
    for(int k = 0; k < ans.size(); k++){
        if(ans[k] == res){
            count++;
        }
    }
    return count;
}


int main(){
    vector<vector<int>> rect = {{3,12}, {3,9}, {8,5}};
    cout<<countGoodRectangles(rect);
    return 0;
}