class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int i = 1, j = skill.size() -2;
        int sum = skill[i-1] + skill[j+1];
        long long chem = skill[i-1] * skill[j+1];
        while(i<j){
            if(skill[i] + skill[j] != sum){
                return -1;
            }
            chem += skill[i] * skill[j];
            i++;
            j--;
        }
        return chem;
    }
};