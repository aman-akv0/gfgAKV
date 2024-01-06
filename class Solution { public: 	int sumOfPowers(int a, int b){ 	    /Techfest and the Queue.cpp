class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	    int count=0;
        
         for(int i=a;i<=b;i++)
         {
            int n=i;
            for(int j=2;j<=sqrt(n);j++)
            {
                while(n%j==0)
                {
                    count++;
                    n=n/j;
               }
            }
            if(n>=2)
            count++;
         }
        
        return count;
	}
};
