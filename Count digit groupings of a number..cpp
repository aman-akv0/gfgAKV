int t[101][1001];
// 	int n= str.size();
	int solve(int i , int preS , string &str){
	    if(i>=str.size()) return 1;
	    if(t[i][preS]!=-1) return t[i][preS];
	    int res=0;
	    int curSum=0;
	    for(int j=i; j<str.size();j++){
	        curSum+=str[j]-'0';
	        if(preS<=curSum){
	            res+=solve(j+1,curSum,str);
	        }
	    }return t[i][preS]= res;
	    
	}
	int TotalCount(string str){
	    // Code here
	    memset(t,-1,sizeof(t));
	    return solve(0,0,str);
	}
