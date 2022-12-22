#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    unordered_map <char,int> row1;
    for(int i = 0; i < board[0].size(); i++){
        if(board[0][i] != '.'){
            row1[board[0][i]]++;
        }
    }
    unordered_map <char,int> row2;
    for(int i = 0; i < board[1].size(); i++){
        if(board[1][i] != '.'){
            row2[board[1][i]]++;
        }
    }
    unordered_map <char,int> row3;
    for(int i = 0; i < board[2].size(); i++){
        if(board[2][i] != '.'){
            row3[board[2][i]]++;
        }
    }
    unordered_map <char,int> row4;
    for(int i = 0; i < board[3].size(); i++){
        if(board[3][i] != '.'){
            row4[board[3][i]]++;
        }
    }
    unordered_map <char,int> row5;
    for(int i = 0; i < board[4].size(); i++){
        if(board[4][i] != '.'){
            row5[board[4][i]]++;
        }
    }
    unordered_map <char,int> row6;
    for(int i = 0; i < board[5].size(); i++){
        if(board[5][i] != '.'){
            row6[board[5][i]]++;
        }
    }
    unordered_map <char,int> row7;
    for(int i = 0; i < board[6].size(); i++){
        if(board[6][i] != '.'){
            row7[board[6][i]]++;
        }
    }
    unordered_map <char,int> row8;
    for(int i = 0; i < board[7].size(); i++){
        if(board[7][i] != '.'){
            row8[board[7][i]]++;
        }
    }
    unordered_map <char,int> row9;
    for(int i = 0; i < board[8].size(); i++){
        if(board[8][i] != '.'){
            row9[board[8][i]]++;
        }
    }
    unordered_map <char,int> col1;
    for(int i = 0; i < board.size(); i++){
        if(board[i][0] != '.'){
            col1[board[i][0]]++;
        }
    }
    unordered_map <char,int> col2;
    for(int i = 0; i < board.size(); i++){
        if(board[i][1] != '.'){
            col2[board[i][1]]++;
        }
    }
    unordered_map <char,int> col3;
    for(int i = 0; i < board.size(); i++){
        if(board[i][2] != '.'){
            col3[board[i][2]]++;
        }
    }
    unordered_map <char,int> col4;
    for(int i = 0; i < board.size(); i++){
        if(board[i][3] != '.'){
            col4[board[i][3]]++;
        }
    }
    unordered_map <char,int> col5;
    for(int i = 0; i < board.size(); i++){
        if(board[i][4] != '.'){
            col5[board[i][4]]++;
        }
    }
    unordered_map <char,int> col6;
    for(int i = 0; i < board.size(); i++){
        if(board[i][5] != '.'){
            col6[board[i][5]]++;
        }
    }
    unordered_map <char,int> col7;
    for(int i = 0; i < board.size(); i++){
        if(board[i][6] != '.'){
            col7[board[i][6]]++;
        }
    }
    unordered_map <char,int> col8;
    for(int i = 0; i < board.size(); i++){
        if(board[i][7] != '.'){
            col8[board[i][7]]++;
        }
    }
    unordered_map <char,int> col9;
    for(int i = 0; i < board.size(); i++){
        if(board[i][8] != '.'){
            col9[board[i][8]]++;
        }
    }
    unordered_map <char,int> sq1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] != '.'){
                sq1[board[i][j]]++;
            }
        }
    }
    unordered_map <char,int> sq2;
    for(int i = 0; i < 3; i++){
        for(int j = 3; j < 6; j++){
            if(board[i][j] != '.'){
                sq2[board[i][j]]++;
            }
        }
    }
    unordered_map <char,int> sq3;
    for(int i = 0; i < 3; i++){
        for(int j = 6; j < 9; j++){
            if(board[i][j] != '.'){
                sq3[board[i][j]]++;
            }
        }
    }
    unordered_map <char,int> sq4;
    for(int i = 3; i < 6; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] != '.'){
                sq4[board[i][j]]++;
            }
        }
    }
    unordered_map <char,int> sq5;
    for(int i = 3; i < 6; i++){
        for(int j = 3; j < 6; j++){
            if(board[i][j] != '.'){
                sq5[board[i][j]]++;
            }
        }
    }
    unordered_map <char,int> sq6;
    for(int i = 3; i < 6; i++){
        for(int j = 6; j < 9; j++){
            if(board[i][j] != '.'){
                sq6[board[i][j]]++;
            }
        }
    }
    unordered_map <char,int> sq7;
    for(int i = 6; i < 9; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] != '.'){
                sq7[board[i][j]]++;
            }
        }
    }
    unordered_map <char,int> sq8;
    for(int i = 6; i < 9; i++){
        for(int j = 3; j < 6; j++){
            if(board[i][j] != '.'){
                sq8[board[i][j]]++;
            }
        }
    }
    unordered_map <char,int> sq9;
    for(int i = 6; i < 9; i++){
        for(int j = 6; j < 9; j++){
            if(board[i][j] != '.'){
                sq9[board[i][j]]++;
            }
        }
    }
    vector <int> digits = {'1','2','3','4','5','6','7','8','9'};
    for(int i = 0; i < digits.size(); i++){
        if(row1.find(digits[i]) != row1.end()){
            if(row1.at(digits[i]) > 1){
                return false;
            }
        }
        if(row2.find(digits[i]) != row2.end()){
            if(row2.at(digits[i]) > 1){
                return false;
            }
        }
        if(row3.find(digits[i]) != row3.end()){
            if(row3.at(digits[i]) > 1){
                return false;
            }
        }
        if(row4.find(digits[i]) != row4.end()){
            if(row4.at(digits[i]) > 1){
                return false;
            }
        }
        if(row5.find(digits[i]) != row5.end()){
            if(row5.at(digits[i]) > 1){
                return false;
            }
        }
        if(row6.find(digits[i]) != row6.end()){
            if(row6.at(digits[i]) > 1){
                return false;
            }
        }
        if(row7.find(digits[i]) != row7.end()){
            if(row7.at(digits[i]) > 1){
                return false;
            }
        }
        if(row8.find(digits[i]) != row8.end()){
            if(row8.at(digits[i]) > 1){
                return false;
            }
        }
        if(row9.find(digits[i]) != row9.end()){
            if(row9.at(digits[i]) > 1){
                return false;
            }
        }
        if(col1.find(digits[i]) != col1.end()){
            if(col1.at(digits[i]) > 1){
                return false;
            }
        }
        if(col2.find(digits[i]) != col2.end()){
            if(col2.at(digits[i]) > 1){
                return false;
            }
        }
        if(col3.find(digits[i]) != col3.end()){
            if(col3.at(digits[i]) > 1){
                return false;
            }
        }
        if(col4.find(digits[i]) != col4.end()){
            if(col4.at(digits[i]) > 1){
                return false;
            }
        }
        if(col5.find(digits[i]) != col5.end()){
            if(col5.at(digits[i]) > 1){
                return false;
            }
        }
        if(col6.find(digits[i]) != col6.end()){
            if(col6.at(digits[i]) > 1){
                return false;
            }
        }
        if(col7.find(digits[i]) != col7.end()){
            if(col7.at(digits[i]) > 1){
                return false;
            }
        }
        if(col8.find(digits[i]) != col8.end()){
            if(col8.at(digits[i]) > 1){
                return false;
            }
        }
        if(col9.find(digits[i]) != col9.end()){
            if(col9.at(digits[i]) > 1){
                return false;
            }
        }
        if(sq1.find(digits[i]) != sq1.end()){
            if(sq1.at(digits[i]) > 1){
                return false;
            }
        }
        if(sq2.find(digits[i]) != sq2.end()){
            if(sq2.at(digits[i]) > 1){
                return false;
            }
        }
        if(sq3.find(digits[i]) != sq3.end()){
            if(sq3.at(digits[i]) > 1){
                return false;
            }
        }
        if(sq4.find(digits[i]) != sq4.end()){
            if(sq4.at(digits[i]) > 1){
                return false;
            }
        }
        if(sq5.find(digits[i]) != sq5.end()){
            if(sq5.at(digits[i]) > 1){
                return false;
            }
        }
        if(sq6.find(digits[i]) != sq6.end()){
            if(sq6.at(digits[i]) > 1){
                return false;
            }
        }
        if(sq7.find(digits[i]) != sq7.end()){
            if(sq7.at(digits[i]) > 1){
                return false;
            }
        }
        if(sq8.find(digits[i]) != sq8.end()){
            if(sq8.at(digits[i]) > 1){
                return false;
            }
        }
        if(sq9.find(digits[i]) != sq9.end()){
            if(sq9.at(digits[i]) > 1){
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector <vector<char>> board =
    {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    cout<<isValidSudoku(board)<<endl;
    return 0;
}