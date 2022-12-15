#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> ans = {};
    for(int i = 1; i <= n; i++){
        if((i % 3 == 0) && (i % 5 == 0)){
            ans.push_back("FizzBuzz");
        }
        else if(i % 3 == 0){
            ans.push_back("Fizz");
        }
        else if(i % 5 == 0){
            ans.push_back("Buzz");
        }
        else{
            ans.push_back(to_string(i));
        }
    }
    return ans;
}


int main(){
    int n = 15;
    for(int i = 0; i < fizzBuzz(n).size(); i++){
        cout<<fizzBuzz(n)[i]<<" ";
    }
    return 0;
}