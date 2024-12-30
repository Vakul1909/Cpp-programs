#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    bool issafe(vector<vector<char>>&board,int row,int col,char dig){
        for(int i=0;i<9;i++){
            if(board[i][col]==dig || board[row][i]==dig){
                return false;
            }
        }
        int srow=(row/3)*3;
        int scol=(col/3)*3;
        for(int i=srow;i<srow+3;i++){
            for(int j=scol;j<scol+3;j++){
                if(board[i][j]==dig){
                    return false;
                }
            }
        }
        return true;
    }
    bool sudoku(vector<vector<char>>&board,int row,int col){
        if(row==9){
            return true;
        }
        int nextrow=row+(col+1)/9;
        int nextcol=(col+1)%9;
        if(board[row][col]!='.'){
            return sudoku(board,nextrow,nextcol);
        }
        for(char dig='1';dig<='9';dig++){
            if(issafe(board,row,col,dig)){
                board[row][col]=dig;
                if(sudoku(board,row,col)){
                    return true;
                }
                board[row][col]='.';
            }
        }
         return false;
    }
    void solvesudoku(vector<vector<char>>&board){
        sudoku(board,0,0);
    }
};


int main(){
    solution s;
    vector<vector<char>>board={
         {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    s.solvesudoku(board);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return true;
}