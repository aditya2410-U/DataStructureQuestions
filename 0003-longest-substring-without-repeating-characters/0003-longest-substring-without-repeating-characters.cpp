class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int low = 0;
        int maxi = 0;
        for(int high = 0;high < s.size();high++){
            int current = s[high];
            mpp[current]++;
            while(mpp[current] > 1){
                mpp[s[low]]--;
                low++;
            }
            maxi = max(maxi, high - low + 1);
        }
        return maxi;
    }
};