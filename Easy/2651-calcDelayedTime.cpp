#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

 int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int sum = arrivalTime + delayedTime;
    if(sum >= 24){
        return (sum - 24);
    }
    return sum;
}

int main(){
    int arrivalTime = 13;
    int delayedTime = 11;
    cout<<findDelayedArrivalTime(arrivalTime, delayedTime)<<endl;
    return 0;
}