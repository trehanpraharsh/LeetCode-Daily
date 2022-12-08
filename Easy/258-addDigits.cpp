#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int addDigits(int num) {
    while(num >= 10){
        num = num % 10 + num / 10;
    }
    return num;
}


int main(){
    int number = 38;
    cout<<addDigits(number)<<endl;
    return 0;
}