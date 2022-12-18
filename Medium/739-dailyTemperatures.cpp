#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include<stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    
    stack<int> stac;
    vector<int> temp(temperatures.size(), 0);
    for(int i=0; i<temperatures.size(); i++){
        
        while(stac.size() && temperatures[stac.top()] < temperatures[i]){
            temp[stac.top()] = i - stac.top();
            stac.pop();
        }
        stac.push(i);
    }
    return temp;
}


int main(){
    vector<int> temperatures = {73,74,75,71,69,72,76,73};
    for(int i = 0; i < dailyTemperatures(temperatures).size(); i++){
        cout<<dailyTemperatures(temperatures)[i]<<" ";
    }
    return 0;
}