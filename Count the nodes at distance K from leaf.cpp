vector<vector<Node*>>ans;
    //Function to return count of nodes at a given distance from leaf nodes.
    void solve(Node* root,vector<Node*> &temp){
        
        if(root==NULL) return ;
        temp.push_back(root);
        if(root->left==NULL && root->right==NULL){
            ans.push_back(temp);
        }
        solve(root->left,temp);
        solve(root->right,temp);
        temp.pop_back();
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
    	 vector<Node*> temp;
    	 solve(root,temp);
    	 unordered_set<Node*> set;
    	 for(vector<Node*>&path:ans){
    	     int n=path.size();
    	     if(n>k){
    	         set.insert(path[n-k-1]);
    	     }
    	 }return set.size();
    	
    }
