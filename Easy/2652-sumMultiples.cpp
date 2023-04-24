#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int sumOfMultiples(int n) {
    int sum = 0;
    for(int i = 0; i <= n; i++){
        if((i % 3 == 0) || (i % 5 == 0) || (i % 7 == 0)){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n = 28965;
    cout<<sumOfMultiples(n)<<endl;
    return 0;
}