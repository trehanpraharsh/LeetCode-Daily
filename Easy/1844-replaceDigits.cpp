#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void shift(char &b, char &c, int x){
    string mainStr = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < mainStr.length(); i++){
        if(mainStr[i] == b){
            c = mainStr[i + x];
        }
    }
}
    
string replaceDigits(string s) {
    for(int j = 1; j < s.length(); j += 2){
        shift(s[j-1], s[j], s[j] - '0');
    }
    return s;
}

int main(){
    string s = "a1c1e1";
    cout<<replaceDigits(s);

    return 0;
}