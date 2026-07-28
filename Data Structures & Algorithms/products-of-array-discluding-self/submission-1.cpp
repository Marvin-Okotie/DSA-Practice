class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size() == 2) return {nums[1], nums[0]};

        vector<int> nums_out(nums.size(),1);

        for(int i = 0; i < nums.size(); ++i){
            for(int j = 0; j < nums.size(); ++j){
                if(i != j){
                    nums_out[i] *= nums[j];
                }
            }
        }

        return nums_out;

    }
};
