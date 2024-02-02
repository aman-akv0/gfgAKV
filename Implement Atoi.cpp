int atoi(string s) {
        //Your code here
        bool status=false;
        int res=0;
        for(int i=0; i<s.size();i++){
            if(isalpha(s[i]) || (s[i]=='-' && i!=0)) return -1;
            else if(s[i]=='-' && i==0) status= true;
            else{
                res=res*10+s[i]-'0'; 
            }
        }if (status) res= res*-1;
        return res;
    }
