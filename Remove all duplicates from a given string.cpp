	string removeDuplicates(string str) {
	    // code here
	    unordered_set<char>set;
	    string res="";
	    for(int i=0;i<str.size();i++){
	        if(set.find(str[i])==set.end()){
	            set.insert(str[i]);
	            res+=str[i];
	        }
	       
	    }return res;
	}
