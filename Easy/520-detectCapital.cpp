#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool detectCapitalUse(string word) {
        int count = 1;
        for(int i = 1; i < word.length(); i++){
            if(word[0] >= 65 && word[0] <= 90){
                if(word[i] >= 65 && word[i] <= 90){
                    count++;
                }
            }
            else if(word[0] >= 97 && word[0] <= 122){
                if(word[i] >= 65 && word[i] <= 90){
                    return false;
                }
                count++;
            }
        }
        if(count == 1 || count == word.length()){
            return true;
        }
        return false;
    }


int main(){
    string word = "FlaG";
    cout<<detectCapitalUse(word)<<endl;
    return 0;
}