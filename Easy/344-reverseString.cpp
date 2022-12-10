#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void swapNums(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

void reverseString(vector<char>& s) {
    int n = s.size();
    int low = 0;
    int high = n - 1;
    while(low<=high){
        swap(s[low], s[high]);
        low++;
        high--;
    }
}


int main(){
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    for(int i = 0; i < s.size(); i++){
        cout<<s[i]<<" ";
    }
    return 0;
}