#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int pivotInteger(int n) {
    int num = 0;
    int s1;
    int s2;
    while(s1 != s2 && num <=n){
        s1 = 0;
        s2 = 0;
        num++;
        for(int i = 0; i <= num; i++){
            s1+=i;
        } 
        for(int j = num; j <= n; j++){
            s2+=j;
        }
    }
    if(s1 == s2){
        return num;
    }
    return -1;
}

int main(){
    int n = 8;
    cout<<pivotInteger(n);
    return 0;
}