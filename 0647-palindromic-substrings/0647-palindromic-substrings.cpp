class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0, n = s.size();

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string t = s.substr(i, j - i + 1);
                string r = t;
                reverse(r.begin(), r.end());

                if (t == r) ans++;
            }
        }
        return ans;
    }
};