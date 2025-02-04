class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int n = nums.size();
        double maxi = INT_MIN;
        double sum = 0;
        while(right < n){
            sum += nums[right];
            while(right - left + 1 == k){
                maxi = max(maxi, sum/k);
                sum -= nums[left];
                left++;
            }
            right++;
        }
        return maxi;
    }
};