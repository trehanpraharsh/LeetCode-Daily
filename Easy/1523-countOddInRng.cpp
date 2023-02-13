#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int countOdds(int low, int high) {
    int count = 0;
    for(int i = low; i <= high; i++){
        if(i % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    int low = 3;
    int high = 5;
    cout<<countOdds(low, high)<<endl;
    return 0;
}