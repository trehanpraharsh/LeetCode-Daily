#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    unordered_map <string,int> m1;
    unordered_map <string,int> m2;
    unordered_map <string,int> m;
    vector<int> sizes = {};
    for(int i = 0; i < list1.size(); i++){
        m1.insert({list1[i],i});
    }
    for(int i = 0; i < list2.size(); i++){
        m2.insert({list2[i],i});
    }
    if(list1.size() >= list2.size()){
        for(int i = 0; i < list2.size(); i++){
            if(m1.find(list2[i]) != m1.end()){
                m.insert({list2[i],m1[list2[i]]+m2[list2[i]]});
                sizes.push_back(m1[list2[i]]+m2[list2[i]]);
            }
        }
    }
    else{
        for(int i = 0; i < list1.size(); i++){
            if(m2.find(list1[i]) != m2.end()){
                m.insert({list1[i],m1[list1[i]]+m2[list1[i]]});
                sizes.push_back(m1[list1[i]]+m2[list1[i]]);
            }
        }
    }
    int min = sizes[0];
    for(int i = 0; i < sizes.size(); i++){
        if(sizes[i] < min){
            min = sizes[i];
        }
    }
    vector<string> ans = {};
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second == min){
            ans.push_back(it->first);
        }
    }
    return ans;
}

int main(){
    vector<string> list1 = {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2 = {"KNN","KFC","Burger King","Tapioca Express","Shogun"};
    for(int i = 0; i < findRestaurant(list1, list2).size(); i++){
        cout<<findRestaurant(list1,list2)[i]<<" ";
    }
    cout<<endl;
    return 0;
}