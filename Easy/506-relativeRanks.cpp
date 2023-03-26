#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <queue>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    vector<string> ans;
    priority_queue<int> pq(score.begin(), score.end());
    unordered_map <int,string> m;
    int k = 1;
    while(pq.size() > 0){
        if(k == 1){
            m[pq.top()] = "Gold Medal";
        }
        else if(k == 2){
            m[pq.top()] = "Silver Medal";
        }
        else if(k == 3){
            m[pq.top()] = "Bronze Medal";
        }
        else{
            m[pq.top()] = to_string(k);
        }
        pq.pop();
        k++;
       
    }
    for(int i = 0; i < score.size(); i++){
        ans.push_back(m[score[i]]);
    } 
    return ans;
}

int main(){
    vector<int> score = {10,3,8,9,4};
    for(int i = 0; i < findRelativeRanks(score).size(); i++){
        cout<<findRelativeRanks(score)[i]<<endl;
    }
    return 0;
}