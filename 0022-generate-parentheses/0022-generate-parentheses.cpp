class Solution {
public:
    void solve(string s, int open, int close, int n, vector<string>& ans) {

        // String complete ho gayi
        if(s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        // '(' add kar sakte hain
        if(open < n)
            solve(s + "(", open + 1, close, n, ans);

        // ')' tabhi add karenge jab valid ho
        if(close < open)
            solve(s + ")", open, close + 1, n, ans);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        solve("", 0, 0, n, ans);

        return ans;
    }
};