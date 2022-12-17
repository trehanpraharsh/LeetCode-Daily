#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map <char,int> m;
    m.insert({'I',1});
    m.insert({'V',5});
    m.insert({'X',10});
    m.insert({'L',50});
    m.insert({'C',100});
    m.insert({'D',500});
    m.insert({'M',1000});
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(i != 0 && m.at(s[i]) > m.at(s[i-1])){
            sum = sum + m.at(s[i]) - 2*m.at(s[i-1]);
        }
        else{
            sum = sum + m.at(s[i]);   
        }
    }
    return sum;
}

int main(){
    string s = "MCMXCIV";
    cout<<"Final ans : "<<romanToInt(s)<<endl;
    return 0;
}