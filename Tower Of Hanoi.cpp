int solve(int n, int from, int to, int aux){
        if(n==0)return 0;
        if(n==1){
            cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
            return 1;
        } 
        int c=0;
        c+=solve(n-1,from,aux,to);
        cout<<"move disk "<<n<<" from rod "<<from<< " to rod "<<to<<endl;
        c++;
        c+=solve(n-1,aux,to,from);
        return c;
    }
    long long toh(int n, int from, int to, int aux) {
        // Your code here
        return solve(n,from , to , aux);
    }
