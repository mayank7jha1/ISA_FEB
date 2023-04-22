// COde was showing TLE because on line 64 i did =! instead of != .

class Solution {
public:
        bool check(vector<vector<char>>&board,int i,int j,int value){
        // us column mai check karliya
        for(int x = 0;x<board.size();x++ ){
            if(board[x][j]-'0'==value){
                return false;
            }
        }
        
        // us row mai check
        for(int y = 0;y<board[0].size();y++){
            if(board[i][y]-'0'==value){
                return false;
            }
        }
        
        
        // 3*3 ke block mai check
        
        int blocki = i/3*3;
        int blockj = j/3*3;
        
        
        for(int x = 0;x<3;x++){
            for(int y = 0 ;y<3;y++){
                if(board[blocki+x][blockj+y]==value+'0'){
                    return false;
                }
            }
        }
        return true;
    }
    vector<vector<char>>ans;
    // bool flag = false;
    void solveSudoku(vector<vector<char>>& board) {
        // flag = false;
            solve(board,0,0);
            board = ans;
    }
    
    
    void solve(vector<vector<char>>&board,int i ,int j){
        if(i==board.size()){
            ans = board;
            // flag = true;
            return;
        }
        
        int newi=0;
        int newj=0;
        
        if(j==board[0].size()-1){
            newi = i+1;
            newj = 0;
        }
        else {
            newi = i;
            newj = j+1;
        }
        
        if(board[i][j] != '.'){
            // cout<<"ch"<<endl;
            solve(board,newi,newj);
        }
        else{
            for(int val = 1;val<=9;val++){
                
                if(check(board,i,j,val)){
                    board[i][j] = val+'0';
                    solve(board,newi,newj);
                    board[i][j] = '.';
                    // if(flag == true) return ;
                }
            }
        }
    }

};