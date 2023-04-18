#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int total = row * col;
    int count = 0;

    int sR = 0;
    int sC = 0;
    int eR = row - 1;
    int eC = col - 1;

    while(count<total){
        for(int i = sC; count < total && i <=eC; i++){
            ans.push_back(matrix[sR][i]);
            count++;
        }
        sR++;
        for(int i = sR; count < total && i <=eR; i++){
            ans.push_back(matrix[i][eC]);
            count++;
        }
        eC--;
        for(int i = eC; count < total && i >=sC; i--){
            ans.push_back(matrix[eR][i]);
            count++;
        }
        eR--;
        for(int i = eR; count < total && i >=sR; i--){
            ans.push_back(matrix[i][sC]);
            count++;
        }
        sC++;
    }
    return ans;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i = 0; i < spiralOrder(matrix).size(); i++){
        cout<<spiralOrder(matrix)[i]<<" ";
    }
    cout<<endl;
    return 0;
}