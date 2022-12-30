#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map <char,int> m1;
    unordered_map <char,int> m2;
    for(int i = 0; i < ransomNote.length(); i++){
        m1[ransomNote[i]]++;
    }
    for(int i = 0; i < magazine.length(); i++){
        m2[magazine[i]]++;
    }
    int count = 0;
    for(auto it = m1.begin(); it != m1.end(); it++){
        if(m2.find(it->first) != m2.end()){
            if(m2[it->first] >= it->second){
                count+=it->second;
            }
        }
    }
    if(count == ransomNote.size()){
        return true;
    }
    return false;
}

int main(){
    string ransomNote = "aa", magazine = "aab";
    cout<<canConstruct(ransomNote, magazine)<<endl;
    return 0;
}