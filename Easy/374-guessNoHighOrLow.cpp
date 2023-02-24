#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int guess(int n){
    int pick = 6;
    if(n == pick){
        return 0;
    }
    else if(n < pick){
        return 1;
    }
    else{
        return -1;
    }
}

int guessNumber(int n) {
    while(guess(n) != 0){
        if(guess(n) == 0){
            return n;
        }
        else if(guess(n) == 1){
            n++;
        }
        else{
            n--;
        }
    }
    return n;
}

int main(){
    int n = 10;
    cout<<guessNumber(n)<<endl;
    return 0;
}