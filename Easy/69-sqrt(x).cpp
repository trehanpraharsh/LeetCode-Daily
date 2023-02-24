#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int mySqrt(int x) {
    int low = 0;
    int high = x;
    int ans = -1;
    while(low <= high){
        long long mid = (low + high) / 2;
        long long mSq = mid * mid;
        if(mSq == x){
            return mid;
        }
        else if(mSq > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main(){
    int x = 2147395599;
    cout<<mySqrt(x)<<endl;
    return 0;
}