#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t){
    if(s.length() != t.length()){
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == t[i]){
            count++;
        }
    }
    if(count == s.length()){
        return true;
    }
    return false;
}

int main(){
    string s = "anagram";
    string t = "nagaram";
    cout<<isAnagram(s,t)<<endl;
    return 0;
}