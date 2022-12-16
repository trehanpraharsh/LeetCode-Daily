#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

string reverseWords(string s) {
    int low = 0;
    int high = low;
    vector<string> ans;
    string sol = "";
    while(high<s.length()){
        while(s[high]!=' ' && high<s.length()){
            high++;
        }
        for(int k = high - 1; k >= low; k--){
            sol+=s[k];
        }
        low = high + 1;
        ans.push_back(sol);
        sol = "";
        high++;
    }
    sol = "";
    for(int i = 0; i < ans.size(); i++){
        if(i != ans.size() - 1){
            sol+=ans[i] + " ";
        }
        else{
            sol+=ans[i];
        }
    }
    return sol;
}


int main(){
    string s = "Let's take LeetCode contest";
    cout<<reverseWords(s)<<endl;
    return 0;
}