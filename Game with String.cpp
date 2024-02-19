int minValue(string s, int k){
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        priority_queue<int> que;
        for(auto it:mp){
            que.push(it.second);
        }
        while(k--){
            auto tp=que.top();
            que.pop();
            que.push(tp-1);
        }
        int res=0;
        while(que.size()){
            auto it=que.top();
            que.pop();
            res+= it*it;
        }
        return res;
        
    }
