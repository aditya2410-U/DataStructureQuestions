class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxi = 0;
        int i = 0, j = n - 1;

        while (j > 0) {
            if (colors[i] != colors[j]) {
                maxi = max(maxi, j - i);
            }
            j--;
        }
        i = 0;
        j = n - 1;

        while (i < n - 1) {
            if (colors[i] != colors[j]) {
                maxi = max(maxi, j - i);
            }
            i++;
        }

        return maxi;
    }
};