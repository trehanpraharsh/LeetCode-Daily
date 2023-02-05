#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
    unordered_map <int,vector<int>> m;
    vector<int> res;
    for(int i = 0; i < score.size(); i++){
        m[score[i][k]] = score[i];
        res.push_back(score[i][k]);
    }
    sort(res.begin(), res.end());
    reverse(res.begin(), res.end());
    vector<vector<int>> ans;
    for(int i = 0; i < res.size(); i++){
        ans.push_back(m[res[i]]);
    }
    return ans;
}

int main(){
    vector<vector<int>> score = {{10,6,9,1},{7,5,11,2},{4,8,3,15}};
    int k = 2;
    for(int i = 0; i < sortTheStudents(score, k).size(); i++){
        cout<<"[";
        for(int j = 0; j < sortTheStudents(score, k)[i].size(); j++){
            cout<<sortTheStudents(score, k)[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}