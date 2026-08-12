class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() < 2) return s.size();

        unordered_set<char> seen;
        int l = 0;
        int output = 0;
        
        for(int r = 0; r < s.size(); ++r){
            while(seen.count(s[r])) {
                seen.erase(s[l]);
                ++l;
            }
            seen.insert(s[r]);
            output = max(output,(r - l) + 1);
        }
        return output;
    }
};
