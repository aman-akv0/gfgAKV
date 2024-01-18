int min_sprinklers(int gallery[], int n)
    {
        vector<pair<int,int>> cover(n);
        
        for(int i = 0; i < n; i++){
            if(gallery[i] == -1)
                cover[i] = {1e7, 1e7};
            else
                cover[i] = {i - gallery[i], i + gallery[i]};
        }
        
        sort(cover.begin(), cover.end());
        
        int take = 0, index = 0, ans = 0;
        
        while(take < n){
            int nax = take - 1;
            
            while(index < n and cover[index].first <= take){
                nax = max(nax, cover[index++].second);
            }
            
            if(nax + 1 > take){
                ++ans;
                take = nax + 1;
            }
            else
                return -1;
        }
        
        return ans;
    }




wrong one


int min_sprinklers(int gallery[], int n) {
    int ans = INT_MAX;

    for (int i = 0; i < n; ++i) {
        int j = 0;
        int c = 0;

        while (j < n) {
            if (gallery[j] == -1) {
                ++j;
            } else {
                int a = j - gallery[j];
                int b = j + gallery[j];
                if (a < 0) a = 0;
                if (b > n - 1) b = n - 1;
                j = b + 1;
                c++;
            }
        }

        // Check if the last element itself covers the entire gallery
        if (j - 1 >= n - 1) {
            ans = std::min(ans, c);
        }
    }

    return (ans == INT_MAX) ? -1 : ans;
