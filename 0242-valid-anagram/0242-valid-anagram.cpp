class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false; 
        unordered_map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(char c : t){
            mpp[c]--;
            if(mpp[c] < 0) return false;
        }
        return true;
        }
};