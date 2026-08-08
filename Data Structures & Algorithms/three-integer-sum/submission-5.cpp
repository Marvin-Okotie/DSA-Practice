class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;

        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int target = nums[i] * -1;
            int l = i + 1;
            int r = nums.size()  - 1;
            while(l < r){
                int curr_sum = nums[l] + nums[r];
                if(curr_sum == target){
                    output.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l-1]) l++;
                }
                else if(curr_sum < target){
                    l++;
                } 
                else {
                    r--;
                }
            }

        }

        return output;
        
    }
};
