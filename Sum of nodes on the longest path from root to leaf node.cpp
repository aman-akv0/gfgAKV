int mxh= 0;
int mxs=0; 
    void solve(Node * root, int h, int sum){

        if(!root){
            if(h>mxh){
                mxh = h;
                mxs= sum; 
            }
            else if(h==mxh)mxs= max(mxs, sum);
            return;
        }
        solve(root->left, h+1,sum + root->data);
        solve(root->right, h+1 , sum +root->data); 
       
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
     
        //method-1
        solve(root, 0, 0); 
        return mxs;
        
        //method 2
        int ans = 0;
        queue<pair<Node *, int>> q; 
        q.push({root, root->data});
        
        while(q.size()){
            int sz = q.size(); 
            ans =0; 
            while(sz--){
                Node * t = q.front().first; 
                int val = q.front().second;
                q.pop();
                ans = max(ans, val); 
                if(t->left)q.push({t->left,val + t->left->data});
                if(t->right)q.push({t->right,val + t->right->data});
            }
        }
        return ans; 
        
    }

