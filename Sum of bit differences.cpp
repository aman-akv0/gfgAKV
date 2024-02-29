long long sumBitDifferences(int arr[], int n) {
	
	    long cnt = 0;
        for(int i=31;i>=0;i--){
           long a = 0;
           for(int j=0;j<n;j++){
               a+=(arr[j]>>i)&1;
           }
           cnt += 2*a*(n-a);
        }
        return cnt;
    }
