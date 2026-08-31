class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;
        int mini = nums[0];

        while(l <= r){
            if(nums[l] < nums[r]){
                mini = min(mini, nums[l]);
                break;
            }
            int mid = (r + l) / 2;
            mini = min(mini, nums[mid]);

            if(nums[mid] >= nums[l]){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        return mini;
    }
};
