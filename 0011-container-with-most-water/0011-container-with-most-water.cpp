class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() -1;
        int maxi = 0;
        while(left < right){
            int h1 = right - left;
            int h2 = min(height[left],height[right]);
            int area = h1 * h2;
            maxi = max(maxi, area);
            if(height[left] < height[right]){
                left++;
            }
            else if(height[left] > height[right]){
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        return maxi;
    }
};