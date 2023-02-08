#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int trap(vector<int>& height) {
    int ans = 0;
    int n = height.size();
    vector<int> lMax(n);
    vector<int> rMax(n);
    lMax[0] = height[0];
    for(int i = 1; i < n; i++){
        lMax[i] = max(lMax[i-1], height[i]);
    }
    rMax[n - 1] = height[n - 1];
    for(int i = n - 2; i >= 0; i--){
        rMax[i] = max(rMax[i+1], height[i]);
    }
    for(int i = 1; i < n - 1; i++){
        ans = ans + (min(lMax[i], rMax[i]) - height[i]);
    }
    return ans;
}

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height)<<endl;
    return 0;
}