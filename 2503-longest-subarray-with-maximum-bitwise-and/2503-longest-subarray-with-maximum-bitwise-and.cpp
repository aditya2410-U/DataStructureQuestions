class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_val = *max_element(nums.begin(), nums.end());
        int max_len = 0;
        int temp_len = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == max_val) {
                temp_len++;
                max_len = max(max_len, temp_len);
            } else {
                temp_len = 0;
            }
        }
        return max_len;
    }
};
