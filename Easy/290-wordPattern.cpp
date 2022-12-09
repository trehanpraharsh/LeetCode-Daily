#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool wordPattern(string pattern, string s) {
    vector<string> sArray;
    int low  = 0;
    int high = low;
    string m = "";
    while(high<s.length()){
        while(s[high]!=' ' && high<s.length()){
            high++;
        }
        for(int k = low; k < high; k++){
            m+=s[k];
        }
        low = high + 1;
        sArray.push_back(m);
        m = "";
        high++;
    }
    if(pattern.size() != sArray.size()){
        return false;
    }
    unordered_map <char,string> ans;
    unordered_map <string,char> sol;
    for(int i = 0; i < pattern.length(); i++){
        ans.insert({pattern[i],sArray[i]});
        sol.insert({sArray[i],pattern[i]});
    }
    int count = 0;
    for(int j = 0; j < pattern.length(); j++){
        if(( ans.find(pattern[j]) != ans.end()) && (sol.find(sArray[j]) != sol.end()) ){
            if( (ans[pattern[j]] == sArray[j]) && (sol[sArray[j]]==pattern[j])){
                count++;
            }
        }
    }
    return (count == pattern.size());
}

int main(){
    string pattern = "abba";
    string s = "dog cat cat dog";
    cout<<wordPattern(pattern,s)<<endl;
    return 0;
}