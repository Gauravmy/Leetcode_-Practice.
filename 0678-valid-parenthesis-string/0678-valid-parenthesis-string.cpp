class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;

        for(char c : s) {

            if(c == '(') {
                low++;
                high++;
            }
            else if(c == ')') {
                low--;
                high--;
            }
            else {  // '*'
                low--;   // '*' ko ')' maan lo
                high++;  // '*' ko '(' maan lo
            }

            // high negative means ')' zyada ho gaye
            if(high < 0)
                return false;

            // low negative ho sakta hai,
            // kyunki '*' ko empty bhi maan sakte hain
            if(low < 0)
                low = 0;
        }

        // Agar minimum possible open brackets 0 hain,
        // to valid string ban sakti hai
        return low == 0;
    }
};