class Solution {
public:
    bool checkPath(vector<string> &ds,int col,int row,int &n){
        
        for(int i=row,j=col;i>=0 && j>=0;i--,j--)
            if(ds[i][j] == 'Q') return false;

        for(int i=0;i<row;i++)
            if(ds[i][col] == 'Q') return false;

        for(int i=row,j=col;i>=0 && j<n;i--,j++)
            if(ds[i][j] == 'Q') return false;

        return true;    
    }
    void nQueen(vector<vector<string>> &mat,vector<string> &ds,int row,int &n){
        if(row == n){
            mat.push_back(ds);
            return;
        }
        for(int col=0;col<n;col++)
        {
            if(checkPath(ds,col,row,n)){
                ds[row][col]='Q';
                nQueen(mat,ds,row+1,n);
                ds[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> mat;
        vector<string> ds(n, string(n, '.'));
        nQueen(mat,ds,0,n);
        return mat;
    }
};
