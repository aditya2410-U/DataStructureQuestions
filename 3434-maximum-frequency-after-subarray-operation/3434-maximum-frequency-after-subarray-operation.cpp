

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        unordered_map<int, int> totalFreq;

        // Count frequency of each number
        for (int i = 0; i < nums.size(); i++) {
            totalFreq[nums[i]]++;
        }

        int ans = totalFreq[k]; // base count of k

        // Try converting each value 'v' into k
        for (auto it = totalFreq.begin(); it != totalFreq.end(); it++) {
            int v = it->first;

            if (v == k) continue;

            int curr = 0;
            int best = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == v) {
                    curr += 1;     // we can convert v → k
                } else if (nums[i] == k) {
                    curr -= 1;     // we lose an existing k
                } 
                if (curr < 0) {
                    curr = 0;
                }

                if (curr > best) {
                    best = curr;
                }
            }

            // base k + best gain from converting v
            if (totalFreq[k] + best > ans) {
                ans = totalFreq[k] + best;
            }
        }

        return ans;
    }
};