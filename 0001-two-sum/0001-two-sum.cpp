class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> num1;
        for (int i = 0; i < nums.size(); ++i) {
            num1.push_back({nums[i], i});
        }

        sort(num1.begin(),num1.end());

        int low = 0;
        int high = num1.size()-1;
        vector<int> ans;

        while(low < high){
            int sum = num1[low].first + num1[high].first;
            if(sum==target){ 
                ans.push_back(num1[low].second);
                ans.push_back(num1[high].second);
                return ans;
            }
            else if(sum < target){
                ++low;
            }
            else{
                --high;
            }
           
        }
        return ans;
    }
};