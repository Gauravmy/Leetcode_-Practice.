class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        string s = "0123456789abcdef", ans = "";
        while (num) {
            ans += s[num & 15];
            num = (unsigned int)num >> 4;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};