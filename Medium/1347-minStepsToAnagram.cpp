#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int minSteps(string s, string t) {
    unordered_map <char,int> m;
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        m[s[i]]++;
    }
    for(int i = 0; i < t.length(); i++){
        m[t[i]]--;
    }
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second >  0){
            ans += it->second;
        }
    }
    return ans;
}

int main(){
    string s = "aba";
    string t = "bab";
    cout<<minSteps(s, t)<<endl;
    return 0;
}