class Solution {
public:
    int totalNQueens(int n) {
        vector<vector<string>> sol;
        vector<string> board(n);
        string str(n,'.');
        for(int i=0;i<n;i++){
            board[i]=str;
        }
        vector<int> leftrow(n,0),ldiagonal(2*n-1,0),udiagonal(2*n-1,0);
        queens(0,board,sol,leftrow,ldiagonal,udiagonal,n);
        return sol.size();
    }
    void queens(int col,vector<string>& board,vector<vector<string>>& sol,vector<int>& leftrow,vector<int>& ldiagonal,vector<int>& udiagonal,int n){
        if(col==n){
            sol.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftrow[row]==0 && ldiagonal[row+col]==0 && udiagonal[n-1+col-row]==0){
                board[row][col]='Q';
                leftrow[row]=1;
                ldiagonal[row+col]=1;
                udiagonal[n-1+col-row]=1;
                queens(col+1,board,sol,leftrow,ldiagonal,udiagonal,n);
                board[row][col]='.';
                leftrow[row]=0;
                ldiagonal[row+col]=0;
                udiagonal[n-1+col-row]=0;
            }
        }
        
    }
};