// long long sequence(int n){
    //     // code here
    //     int mod=1e9+7;
    //     long long ans = 0;
    //     long long res=1;
    //     for(int i=1;i<=n;i++){
    //         long long curr=1;
    //         for(int j=1;j<=i;j++){
    //             curr=(curr*res)%mod;
    //             res++;
    //         }ans+=curr % mod;
    //     }return ans % mod;
        
    // }
    long long mod=1e9+7;
    long long solve(int i,int c, int n){
        if(i>n) return 0;
        long long res=1;
        for(int j=1;j<=i;j++){
            res=(res*c) %mod;
            c++;
        }res=(res+solve(i+1,c,n))%mod;
        return res % mod;
    }
    long long sequence(int n){
        // code here
        return solve(1,1,n);
        
    }
