#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int minSteps(string s, string t) {
    unordered_map <char,int> m1;
    unordered_map <char,int> m2;
    for(int i = 0; i < s.length(); i++){
        m1[s[i]]++;
    }
    for(int i = 0; i < t.length(); i++){
        m2[t[i]]++;
    }
    int count = 0;
    for(int i = 0; i < t.length(); i++){
        if(m1.find(t[i]) != m1.end()){
            if(m1[t[i]] == m2[t[i]]){
                continue;
            }
            else{
                if(m1[t[i]] > m2[t[i]]){
                    count += m1[t[i]] - m2[t[i]];
                    m2[t[i]] = m1[t[i]];
                }
                else{
                    count += m2[t[i]] - m1[t[i]];
                    m1[t[i]] = m2[t[i]];
                }
            }
        }
        else if(m1.find(t[i]) == m1.end()){
            count += m2[t[i]];
            m1.insert({t[i], m2[t[i]]});
        }
    }
    for(int i = 0; i < s.length(); i++){
        if(m2.find(s[i]) != m2.end()){
            if(m2[s[i]] == m1[s[i]]){
                continue;
            }
            else{
                if(m2[s[i]] > m1[s[i]]){
                    count += m2[s[i]] - m1[s[i]];
                    m1[s[i]] = m2[s[i]];
                }
                else{
                    count += m1[s[i]] - m2[s[i]];
                    m2[s[i]] = m1[s[i]];
                }
            }
        }
        else if(m2.find(s[i]) == m2.end()){
            count += m1[s[i]];
            m2.insert({s[i], m1[s[i]]});
        }
    }
    return count;
}

int main(){
    string s = "leetcode";
    string t = "coats";
    cout<<minSteps(s, t)<<endl;
    return 0;
}