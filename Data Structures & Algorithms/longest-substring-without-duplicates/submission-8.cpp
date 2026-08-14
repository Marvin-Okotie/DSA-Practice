class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int seen[128] = {0};
        int l = 0;
        int res = 0;

        for(int r = 0; r < s.size(); ++r){
            while(seen[s[r]] > 0){
                seen[s[l]]--;
                l++; 
            }
            res = max(res, r - l + 1);
            seen[s[r]]++;
        }

        return res;
        
    }
};
