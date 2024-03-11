int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int X){ 
	    int ans = 0;
	    multiset<int> a, b;
	    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) a.insert(mat1[i][j]), b.insert(mat2[i][j]);
	    for(auto &x : a) ans += b.count(X - x);
	    return ans;
	}
