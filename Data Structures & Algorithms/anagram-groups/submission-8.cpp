class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        
        for(auto& s: strs){
            string curr_key(26, '\0');
            for(auto& c : s){
                curr_key[(c-'a')]++;
            }
            hash[curr_key].push_back(s);
        }

        vector<vector<string>> res;
        for(auto& [k,v] : hash){
            res.push_back(v);
        }

        return res;

    }
};
