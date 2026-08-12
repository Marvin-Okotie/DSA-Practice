class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() < 2) return s.size();

        int seen[128] = {0};
        int l = 0;
        int output = 0;
        
        for(int r = 0; r < s.size(); ++r){
            while(seen[s[r]] > 0) {
                seen[s[l]] --;
                ++l;
            }
            seen[s[r]]++;
            output = max(output,(r - l) + 1);
        }
        return output;
    }
};
