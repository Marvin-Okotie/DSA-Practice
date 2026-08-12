class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        const size_t length = s.size();
        
        if(length == 0 || length == 1) return length;

        unordered_set<char> seen;

        int l = 0;
        int output = 0;

        for(int r = 0; r < length; ++r){
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
