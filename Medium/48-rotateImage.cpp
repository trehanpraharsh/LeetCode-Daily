/* 
 This is not the Ideal way to do it as I have used another Matrix instead of doing it inPlace. 
 */ 


#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> m(n, vector<int> (n, 0));
    int a = matrix.size() - 1;
    for(int i = 0; i < matrix.size() && a >= 0; i++){
        for(int j = 0; j < matrix[i].size(); j++){
            m[j][a] = matrix[i][j];
        }
        a--;
    }
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            matrix[i][j] = m[i][j];
        }
    }
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    return 0;
}