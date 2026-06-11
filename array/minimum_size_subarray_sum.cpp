class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT32_MAX;
        int sum = 0;
        int left = 0;
        int length = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum >= target) {
                //sum -= nums[left++];
                length = right - left +1;
                result = result < length ? result : length;
                sum -= nums[left++];
            }
        }
        if (result == INT32_MAX){
            return 0;
        }else{
        return result;
        }
    }
};