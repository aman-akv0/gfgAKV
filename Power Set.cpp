vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> v;
		    int n = s.size();
		    for(int i=1 ; i<pow(2,n) ; i++){
		        string sub="";
		        for(int j=0 ; j<n ; j++){
		            
		            if(i&(1<<j)){
		                sub+=s[j];
		                
		            }
		        }v.push_back(sub);
		    }sort(v.begin(),v.end());
		    return v;
		}
