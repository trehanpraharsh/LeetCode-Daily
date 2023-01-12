#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int distributeCandies(vector<int>& candyType) {
    unordered_set <int> s;
    for(int i = 0; i < candyType.size(); i++){
        s.insert(candyType[i]);
    }
    return min(s.size(), candyType.size()/2);
}

int main(){
    vector<int> candyType = {1,1,2,2,3,3};
    cout<<distributeCandies(candyType)<<endl;
    return 0;
}