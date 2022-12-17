#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool checkPerfectNumber(int num) {
    int sum = 0;
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            sum+=i;
        }
    }
    if(sum==num){
        return true;
    }
    return false;
}

int main(){
    int num = 28;
    cout<<checkPerfectNumber(num)<<endl;
    return 0;
}