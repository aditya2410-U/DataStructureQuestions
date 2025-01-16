class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        unordered_map<char,int> mpp;
        int max_freq = 0;
        int max_len = 0;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            max_freq = max(max_freq, mpp[s[i]]);
            while(((i - left + 1) - max_freq) > k){
                mpp[s[left]]--;
                left++;
            }
            max_len = max(max_len, i - left + 1);
        }
        return max_len;
       
    }
};