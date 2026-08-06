class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seq_map(nums.begin(), nums.end());

        int curr = 0;
        int max = 0;
        for(auto n : nums){
            bool seq_begin = false;
            if(!(seq_map.count(n-1))){
                seq_begin = true;
            }
            int k = 0;
            if(seq_begin){
                //curr++;
                seq_begin = false;
                k = n;
                while(seq_map.count(k)){
                    curr++;
                    k = k+1;
                }
                if(curr > max) max = curr;
            }
            curr = 0;
            n = k - 1;
        }

        return max;
    }
};
