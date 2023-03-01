#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool bnSrch(vector<vector<int>>& matrix, int target, int low, int high){
    int l = 0;
    int h = high;
    while(l <= h){
        int mid = (l + h) / 2;
        if(matrix[low][mid] == target){
            return true;
        }
        else if(matrix[low][mid] > target){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int high = matrix[0].size() - 1;
    for(int i = 0; i < matrix.size(); i++){
        if(matrix[i][high] >= target){
            return bnSrch(matrix, target, i, high);
        }
        else{
            continue;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    cout<<searchMatrix(matrix, target)<<endl;
    return 0;
}