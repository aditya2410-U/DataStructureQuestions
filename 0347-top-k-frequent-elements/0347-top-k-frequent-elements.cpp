class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        vector<pair<int, int>> freq_vec;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
           freq_vec.push_back(it);
        }
        sort(freq_vec.begin(), freq_vec.end(), [](const pair<int,int> a, const pair<int,int> b){
            return a.second > b.second;
        });
        for(int i=0;i<k;i++){
            ans.push_back(freq_vec[i].first);
        }
        return ans;
    }
};