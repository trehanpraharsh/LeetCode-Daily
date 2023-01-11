#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int fib(int n) {
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int n = 7;
    cout<<fib(n)<<endl;
    return 0;
}