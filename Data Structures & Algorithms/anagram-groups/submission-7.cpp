class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for(auto& s: strs){
            string s_key(26, '\0');
            for(auto& c: s){
                int idx = c - 'a';
                s_key[idx]++;
            }
        groups[s_key].push_back(s); 
        }

        vector<vector<string>> output;

        for(auto& [k, v]: groups){
            output.push_back(v);
        }

        return output;
    }
};
