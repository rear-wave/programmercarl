class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int right = nums.size() - 1;
        int left = 0;
        vector<int> result(nums.size());
        for(int i = nums.size() - 1; i >= 0; i--){
            if(abs(nums[left]) > abs(nums[right])){
                result[i] = nums[left] * nums[left];
                left++;
            } else {
                result[i] = nums[right] * nums[right];
                right--;
            }
        }
        return result;
    }
};