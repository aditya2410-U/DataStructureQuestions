class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        while(low < high){
            int mid = (high + low)/2;
            if(nums[mid] < target){
                low++;
            }
            else if(nums[mid] > target){
                high--;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};