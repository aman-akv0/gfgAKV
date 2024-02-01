bool checkPangram(string s) {
        unordered_map<char, int> mp;
        bool status = true;
    
        for (char it : s) {
            if (isalpha(it)) {
                mp[tolower(it)]++;
            }
        }
    
        for (char c = 'a'; c <= 'z'; ++c) {
            if (mp.find(c) == mp.end() || mp[c] < 1) {
                status = false;
            }
        }
    
        return status;
