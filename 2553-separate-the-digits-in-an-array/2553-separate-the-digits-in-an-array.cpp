class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {

            int c = nums[i];
            vector<int> rev;

            // Digits nikalna
            while(c > 0) {
                rev.push_back(c % 10);
                c /= 10;
            }

            // Reverse ko original order mein daalna
            for(int j = rev.size() - 1; j >= 0; j--) {
                ans.push_back(rev[j]);
            }
        }

        return ans;
    }
};