#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

string getHint(string secret, string guess) {
    unordered_map<char, int> m1;
    unordered_map<char, int> m2;
    int bulls = 0;
    int cows = 0;
    for(int i = 0; i < secret.length(); i++){
        m1[secret[i]]++; 
    }
    for(int i = 0; i < guess.length(); i++){
        m2[guess[i]]++;
    }
    for(int i = 0; i < secret.length(); i++){
        if(secret[i] == guess[i]){
            bulls++;
            m1[secret[i]]--;
            m2[guess[i]]--;
        }
    }
    for(int i = 0; i < secret.length(); i++){
        if(guess[i] != secret[i] && m1.find(guess[i]) != m1.end() && m1[guess[i]] >0){
            cows++;
            m1[guess[i]]--;   
        }
    }
    string ans = to_string(bulls) + "A" + to_string(cows) + "B";
    return ans;
}

int main(){
    string secret = "1123";
    string guess = "0111";
    cout<<getHint(secret,guess)<<endl;
    return 0;
}