class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int nums_length = nums.size();
        int before_num = 0;

        for (int idx = 0; idx < nums_length; idx++) {
            before_num = nums[idx] + before_num; 
            nums[idx] = before_num;
        }

        return nums;
    }
};