vector<vector<int>> result;
    int solve(Node *root , int sum , int curr_sum , vector<int>&temp){
        if(root==NULL) return 0 ;
        curr_sum+=root->key;
        temp.push_back(root->key);
        // int left=0;
        // int right=0;
        if(curr_sum==sum) result.push_back(temp);
        solve(root->left,sum,curr_sum,temp);
        solve(root->right ,sum,curr_sum,temp);
        temp.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        vector<int>temp;
        int curr_sum=0;
        solve(root,sum,curr_sum,temp);
        return result;
    }
