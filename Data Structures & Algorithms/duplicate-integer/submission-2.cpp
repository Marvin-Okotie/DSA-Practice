class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> h_map;

        for(auto& n : nums){
            if(h_map.count(n)){
                return true;
            }
            h_map[n]++;
        }
        return false;
    }
};