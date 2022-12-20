#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool isMonotonic(vector<int>& A) {
    bool increasing = true;
    bool decreasing = true;
    for (int i = 0; i < A.size() - 1; ++i) {
        if (A[i] > A[i+1])
            increasing = false;
        if (A[i] < A[i+1])
            decreasing = false;
    }   
    return increasing || decreasing;
}


int main(){
    vector<int> nums = {1,2,2,3};
    cout<<isMonotonic(nums)<<endl;
    return 0;
}