#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int maxProfit(vector<int>& prices) {
    if(prices.size() == 1){
        return 0;
    }
    int res = prices[1] - prices[0];
    int minVal = prices[0];
    for(int i = 1; i < prices.size(); i++){
        res = max(res, prices[i] - minVal);
        minVal = min(minVal, prices[i]);
    }
    if(res < 0){
        return 0; 
    }
    return res;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices)<<endl;
    return 0;
}