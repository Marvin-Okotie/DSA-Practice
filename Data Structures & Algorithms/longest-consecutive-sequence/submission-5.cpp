class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());

        int curr = 0;
        int max = 0;
        for(auto n : num_set){
            int k = 0;
            if(!(num_set.count(n-1))){
                k = n;
                while(num_set.count(k)){
                    curr++;
                    k++;
                }
                if(curr > max) max = curr;
            }
            curr = 0;
            n = k - 1;
        }

        return max;
    }
};
