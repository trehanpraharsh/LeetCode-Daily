#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map <char,int> m;
    for(int i = 0; i < s.length(); i++){
        m[s[i]]++;
    }
    for(int i = 0; i < s.length(); i++){
        if(m[s[i]] == 1){
            return i;
        }
    }
    return -1;
}


int main(){
    string s = "loveleetcode";
    cout<<firstUniqChar(s)<<endl;
    return 0;
}