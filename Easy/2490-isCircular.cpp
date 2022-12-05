#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool isCircularSentence(string sentence) {
    int n=sentence.length();
    if(sentence[0]!=sentence[n-1]){
        return false;
    }
    for(int i=0;i<n-1;i++){
        if(sentence[i]==' '){
            if(sentence[i-1]!=sentence[i+1]){
                return false;   
            }   
        }   
    }
    return true;
}


int main(){
    string sentence = "leetcode exercises sound delightful";
    cout<<isCircularSentence(sentence)<<endl;
    return 0;
}