int m ;
    // ilikeu
    int solve( string s, vector<string> &dic){
        if(s.size()==0)return 1;
        string t="";
        int ans=0;
        for(int i=0;i<s.size();i++){
            t+=s[i];
            if(find(dic.begin(),dic.end(),t)!=dic.end()){
                ans|=solve(s.substr(i+1),dic);
            }
        }
        // if(dic.find(s[i]) != dic.end())  solve(n,s,dic,i+1);
        // solve()
        return ans;
    }
    int wordBreak(int n, string s, vector<string> &dic) {
        return solve(s,dic);
    }
