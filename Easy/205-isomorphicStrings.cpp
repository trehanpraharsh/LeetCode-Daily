#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {
    if(s.length() != t.length()){
        return false;
    }
    unordered_map <char,char> ans;
    unordered_map <char,char> sol;
    for(int i = 0; i < s.length(); i++){
        ans.insert({s[i],t[i]});
        sol.insert({t[i],s[i]});
    }
    int count = 0;
    for(int j = 0; j < s.length(); j++){
        if(( ans.find(s[j]) != ans.end()) && (sol.find(t[j]) != sol.end()) ){
            if( (ans[s[j]] == t[j]) && (sol[t[j]] == s[j])){
                count++;
            }
        }
    }
    if(count == s.length()){
        return true;
    }
    return false;
}


int main(){
    string s = "badc";
    string t = "baba";
    cout<<isIsomorphic(s,t)<<endl;
    return 0;
}