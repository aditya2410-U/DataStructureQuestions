class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        for(char c : s1){
            mpp1[c]++;
        }
        int left = 0;
        int right = 0;
        while(right < s2.size()){
            mpp2[s2[right]]++;
            if((right - left + 1) > s1.size()){
                mpp2[s2[left]]--;
                if(mpp2[s2[left]] == 0){
                    mpp2.erase(s2[left]);
                }
                left++;
            }
            if(mpp1 == mpp2 && (right - left + 1) == s1.size()) return true;
            right++;
        }
        return false;
    }
};