#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    vector<int> avgs;
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    avgs.push_back(sum);
    for(int i = k; i < arr.size(); i++){
        sum = sum - arr[i-k] + arr[i];
        avgs.push_back(sum);
    }
    int count = 0;
    int res = threshold * k;
    for(int i = 0; i < avgs.size(); i++){
        if(avgs[i] >= res){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {11,13,17,23,29,31,7,5,2,3};
    int k = 3;
    int threshold = 5;
    cout<<numOfSubarrays(arr, k, threshold)<<endl;
    return 0;
}