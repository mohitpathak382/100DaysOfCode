#include <bits/stdc++.h>
using namespace std;

class Solution{
    
    string dir={"DRUL"};
    int idel[4]={1,0,-1,0};
    int jdel[4]={0,1,0,-1};
    
    void solve(int i,int j,vector<vector<int>> &m,int n,vector<vector<int>> &vis,string ds,vector<string> &res){

        if(i == n-1 && j == n-1)
        {
            res.push_back(ds);
            return;
        }
        
        for (int k = 0; k< 4; k++) 
        {
            if (i + idel[k] >= 0 && j + idel[k] >= 0 &&i + idel[k] < n && j + jdel[k] < n && !vis[i + idel[k]][j + jdel[k]] && m[i + idel[k]][j + jdel[k]] == 1) 
            {
                vis[i][j] = 1;
                solve(i + idel[k], j + jdel[k], m, n,vis,ds+dir[k], res);
                vis[i][j] = 0;
            }
        }
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<vector<int>> vis(n,vector<int>(n,0));
        vector<string> res;
        if(m[0][0] == 1) solve(0,0,m,n,vis,"",res);
        return res;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
