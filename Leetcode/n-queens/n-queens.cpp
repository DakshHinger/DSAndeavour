class Solution {
public:
void solve(int col,vector<vector<string>>& ans,vector<string>& board, vector<int>& r,vector<int>& ud,vector<int>& ld,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(r[row]==0 && ud[n-1+col-row]==0 && ld[row+col]==0){
                board[row][col]='Q';
                r[row]=1;
                ud[n-1+col-row]=1;
                ld[row+col]=1;
                solve(col+1,ans,board,r,ud,ld,n);
                board[row][col]='.';
                r[row]=0;
                ud[n-1+col-row]=0;
                ld[row+col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int> r(n,0),ud(2*n-1,0),ld(2*n-1,0);
        solve(0,ans,board,r,ud,ld,n);
        return ans;
    }
};