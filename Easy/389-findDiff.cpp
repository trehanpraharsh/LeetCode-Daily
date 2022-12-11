#include <algorithm>
#include <iostream>
using namespace std;

char findTheDifference(string s, string t) {
    int sol = 0;
    for(int i = 0; i < s.length(); i++){
        sol^=s[i];
    }
    for(int i = 0; i < t.length(); i++){
        sol^=t[i];
    }
    char ans = sol;
    return ans;
}

int main() {
    string s = "abcd";
    string t = "abcde";
    cout<<findTheDifference(s,t)<<endl;
    return 0;
}