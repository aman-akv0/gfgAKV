int firstElementKTime(int n, int k, int a[])
    {
        unordered_map<int,int> ans; // Creation of hashmap
        for(int i=0;i<n;i++){
                ans[a[i]]++; // Increase the counter variable for every entry
                if(ans[a[i]]==k) return a[i]; // first element which reaches k is returned
        }
        return -1; // Else -1 is returned 
    }
