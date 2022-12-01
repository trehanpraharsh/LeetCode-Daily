#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int countVowels(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u' || 
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] =='U'){
            count++;
        }
    }
    return count;
}
    
bool halvesAreAlike(string s) {
    string s1 = "";
    string s2 = "";
    for(int j = 0; j < s.length()/2 ; j++){
        s1 += s[j];
    }
    for(int k = s.length()/2 ; k < s.length(); k++){
        s2 += s[k];
    }
    if(countVowels(s1) == countVowels(s2)){
        return true;
    }
    return false;
}

int main(){
    string s = "textbook";
    cout<<halvesAreAlike(s);
    return 0;
}