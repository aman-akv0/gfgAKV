int solve(int m, int n){
        if(m<n) return 0;
        if(n==0) return 1;
        
        return solve(m/2,n-1)+solve(m-1,n);
    }
    int numberSequence(int m, int n){
        // code here
        return solve(m,n);
    }
