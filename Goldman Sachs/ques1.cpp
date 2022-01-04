    vector<vector<string> > Anagrams(vector<string>& s) {
        vector<vector<string>>ans;
        if(s.size()==0) return ans;
        unordered_map<string,vector<string>>mp;
        for(auto it:s){
            string z=it;
            sort(z.begin(),z.end());
            mp[z].push_back(it);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
