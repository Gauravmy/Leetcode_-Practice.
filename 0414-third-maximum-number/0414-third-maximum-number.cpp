class Solution {
public:
    int thirdMax(vector<int>& nums) {

        // a = maximum
        // b = second maximum
        // c = third maximum
        long long a = LLONG_MIN;
        long long b = LLONG_MIN;
        long long c = LLONG_MIN;

        for(int x : nums) {

            // Duplicate ko ignore karo
            if(x == a || x == b || x == c)
                continue;

            // x sabse bada hai
            if(x > a) {
                c = b;
                b = a;
                a = x;
            }

            // x second largest hai
            else if(x > b) {
                c = b;
                b = x;
            }

            // x third largest hai
            else if(x > c) {
                c = x;
            }
        }

        // Agar third maximum nahi mila
        // to maximum return karo
        if(c == LLONG_MIN)
            return a;

        return c;
    }
};