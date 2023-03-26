#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    int count = 0;
    int sum = 0;
    while(count != k && numOnes != 0){
        count += 1;
        sum += 1;
        numOnes--;
    }
    while(count != k && numZeros != 0){
        count += 1;
        sum += 0;
        numZeros--;
    }
    while(count != k && numNegOnes != 0){
        count += 1;
        sum -= 1;
        numNegOnes--;
    }
    return sum;
}   

int main(){
    int numOnes = 3, numZeros = 2, numNegOnes = 0, k = 4;
    cout<<kItemsWithMaximumSum(numOnes, numZeros, numNegOnes, k)<<endl;
    return 0;
}