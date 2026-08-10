class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> output(s, 1);

        int prefix = 1;
        for(int i = 0; i < s; ++i){
            output[i] *= prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for(int j = s - 1; j >= 0; --j){
            output[j] *= suffix;
            suffix *= nums[j];
        }

        return output;

    }
};
