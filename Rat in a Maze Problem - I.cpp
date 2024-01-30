vector<string>ans;
    void solve(vector<vector<int>> &m, int n, int i, int j,string path) {
    if ((i < 0 || i >= n) || (j < 0 || j >= n) || m[i][j] == 0) {
        return ;
    }
    if (i == n - 1 && j == n - 1) {
        ans.push_back(path) ;
        return;
    }
    m[i][j]=0;
    // int res = solve(m, n, i, j + 1) + solve(m, n, i - 1, j) + solve(m, n, i + 1, j) + solve(m, n, i, j - 1);
    solve(m, n, i, j + 1, path + "R");
    solve(m, n, i - 1, j, path + "U");
    solve(m, n, i + 1, j, path + "D");
    solve(m, n, i, j - 1, path + "L");
    m[i][j]=1;

    // return ans;
    }

    vector<string>findPath (vector<vector<int>> &m, int n) {
        int i = 0;
        int j = 0;
        solve(m, n, i, j,"");
        return ans ;
    }
    
