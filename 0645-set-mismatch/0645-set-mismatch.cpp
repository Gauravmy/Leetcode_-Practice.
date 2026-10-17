class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);

        for (int x : nums) freq[x]++;

        int a = 0, b = 0;
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) a = i;
            if (freq[i] == 0) b = i;
        }

        return {a, b};
    }
};