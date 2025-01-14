class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        for(string str : strs){
            string temp = str;
            sort(str.begin(),str.end());
            ans[str].push_back(temp);
        }
        vector<vector<string>> arr;
        for(auto it: ans){
            arr.push_back(it.second);
        }
        return arr;
    }
};