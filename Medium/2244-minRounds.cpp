#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int minimumRounds(vector<int>& tasks) {
    unordered_map <int,int> m;
    for(int i = 0; i < tasks.size(); i++){
        m[tasks[i]]++;
    }
    int count = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second == 1){
            return -1;
        }
        else if(it->second % 3 == 0){
            count += it->second / 3;
        }
        else {
            count += it->second / 3 + 1;
        }
    }
    return count;
}

int main(){
    vector<int> tasks = {2,2,3,3,2,4,4,4,4,4};
    cout<<minimumRounds(tasks)<<endl;
    return 0;
}