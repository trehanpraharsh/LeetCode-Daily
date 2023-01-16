#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <set>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    unordered_map <int,int> m1;
    unordered_map <int,int> m2;
    vector<int> ans1;
    vector<int> ans2;
    for(int i = 0; i < matches.size(); i++){
        m1[matches[i][0]]++;
        m2[matches[i][1]]++;
    }
    for(int i = 0; i < matches.size(); i++){
        if(m2.find(matches[i][0]) == m2.end()){
            ans1.push_back(matches[i][0]);
        }
        if(m2[matches[i][1]] == 1){
            ans2.push_back(matches[i][1]);
        }
    }
    set<int> s1;
    set<int> s2;
    for(int i = 0; i < ans1.size(); i++){
        s1.insert(ans1[i]);
    }
    for(int i = 0; i < ans2.size(); i++){
        s2.insert(ans2[i]);
    }
    vector<int> ele1;
    vector<int> ele2;
    for(auto it = s1.begin(); it != s1.end(); it++){
        ele1.push_back(*it);
    }
    for(auto it = s2.begin(); it != s2.end(); it++){
        ele2.push_back(*it);
    }
    vector<vector<int>> ans = {ele1,ele2};
    return ans;
}

int main(){
    vector<vector<int>>  matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    for(int i = 0; i < findWinners(matches).size(); i++){
        cout<<"{";
        for(int j = 0; i < findWinners(matches)[i].size(); j++){
            cout<<findWinners(matches)[i][j]<<" ";
        }
        cout<<"}, ";
    }
    return 0;
}