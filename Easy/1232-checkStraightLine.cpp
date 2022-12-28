#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {
    if(coordinates.size()==2) {
		return true;
	}
	for (int i = 1; i < coordinates.size(); i++) {
		if((coordinates[i][1] - coordinates[1][1])*(coordinates[i][0] - coordinates[0][0])!=
		(double) (coordinates[i][1] - coordinates[0][1])*(coordinates[i][0] -coordinates[1][0])) {
			return false;
		}
	}
	return true;
}


int main(){
    vector<vector<int>> coordinates = {{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
    cout<<checkStraightLine(coordinates)<<endl;
    return 0;
}