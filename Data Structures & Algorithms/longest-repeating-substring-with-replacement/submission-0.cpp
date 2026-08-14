class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;

        int l = 0;
        int res = 0;

        for(int r = 0 ; r < s.size(); ++r){
            freq[s[r]]++;
            int window_length = r - l + 1; 
            auto max_count = max_element(freq.begin(), freq.end(), 
            [](const auto& p1, const auto& p2){
            return p1.second < p2.second; });
            if((window_length - max_count->second) <= k ){
                res = max(res, window_length);
            }
            else{
                freq[s[l]] --;
                l++;
            }
        }
        
        return res;
    }
};
