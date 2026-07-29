class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> output(size, 1);

        for(int i = 1; i < size; ++i){
            output[i] = nums[i - 1] * output[i - 1]; 
        }

        int post = 1;
        for(int j = size - 1; j >= 0; --j){
            output[j] *= post;
            post *= nums[j];
        }

        return output;

    }
};
