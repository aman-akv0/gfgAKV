int maxSum(int n)
        {
            if(n==0) return 0;
            int ans =0;
            int maxi=0;
            ans+=maxSum(n/2)+maxSum(n/3)+maxSum(n/4);
            maxi=max(n,ans);
            return maxi;
        }
