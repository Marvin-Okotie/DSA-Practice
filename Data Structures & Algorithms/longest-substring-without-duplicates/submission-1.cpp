class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        if(s.size() == 0 || s.size() == 1) return s.size();

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
