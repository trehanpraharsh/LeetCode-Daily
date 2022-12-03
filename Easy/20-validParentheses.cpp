#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> stk;
    for(int i = 0; i < s.length(); i++){
        if(stk.empty()){
            stk.push(s[i]);
        }
        else if((stk.top()=='(' && s[i]==')') || (stk.top()=='{' && s[i]=='}') || (stk.top()=='[' && s[i]==']')){
            stk.pop();
        }
        else{
            stk.push(s[i]);
        }
    }
    if(!stk.empty()){
        return false;
    }
    return true;
}

int main(){
    string s = "(}";
    cout<<isValid(s);
    return 0;
}