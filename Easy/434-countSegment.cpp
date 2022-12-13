#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int countSegments(string s) {
    int c=0;
    int n=s.size();
    for(int i=0;i<n;i++){
	if(s[i]!=' '){
	    while(s[i]!=' '&& i<n)
		    i++;
	    c++;
        }
    }
    return c;
}

int main(){
    string s = "Hello, my name is John";
    cout<<countSegments(s)<<endl;
    return 0;
}