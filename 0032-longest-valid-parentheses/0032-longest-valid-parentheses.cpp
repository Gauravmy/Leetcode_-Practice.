class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);  // starting boundary
        int ans = 0;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                // '(' ka index store karo
                st.push(i);
            }
            else {
                // ')' mila, ek '(' ko match karo
                st.pop();

                if(st.empty()) {
                    // Ye ')' unmatched hai
                    // ise new boundary bana do
                    st.push(i);
                }
                else {
                    // Valid substring ki length
                    ans = max(ans, i - st.top());
                }
            }
        }

        return ans;
    }
};