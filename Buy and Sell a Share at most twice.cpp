 int n;
    int dp[100006][2][2];

    int solve(vector<int>& price, int i, bool buy, int k) {
        if (i == n || k == 0) return 0;
        int profit = 0;

        if (dp[i][buy][k] != -1) return dp[i][buy][k];

        if (buy) {
            int consider = solve(price, i + 1, false, k) - price[i];
            int notConsider = solve(price, i + 1, true, k);
            profit = max(consider, notConsider);
        } else {
            int consider = solve(price, i + 1, true, k - 1) + price[i];
            int notConsider = solve(price, i + 1, false, k);
            profit = max(consider, notConsider);
        }
        return dp[i][buy][k] = profit;
    }

    int maxProfit(vector<int>& price) {
        memset(dp, -1, sizeof(dp));
        n = price.size();
        int k = 2;  
        return solve(price, 0, true, k);
    }
    // int dp[100006][2][2];
    //     int help(int i,int pick,int n,vector<int>&prices,bool take){
    //         if(i>=n)return 0;
    //         if(take && i==n-1)return prices[i];
    //         if(pick==0 && !take)return 0;
    //         if(dp[i][pick][take]!=-1)return dp[i][pick][take];
    //         int ans=0;
    //         if(take)
    //             ans=help(i+1,pick,n,prices,false)+prices[i];
    //         else
    //             ans=help(i+1,pick-1,n,prices,true)-prices[i];
    //         ans=max(ans,help(i+1,pick,n,prices,take));
    //         return dp[i][pick][take]=ans;
    //     }
    //     int maxProfit(vector<int>&price){
    //         memset(dp,-1,sizeof(dp));
    //         return help(0,2,price.size(),price,false);   
    //     }
