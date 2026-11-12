class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi = 1;
        int count1 = 1;
        int count2 = 1;

        for (int i = 0; i < nums.size() - 1; i++) {

            if (nums[i] < nums[i + 1])
                count1++;
            else
                count1 = 1;

            if (nums[i] > nums[i + 1])
                count2++;
            else
                count2 = 1;

            maxi = max(maxi, max(count1, count2));
        }

        return maxi;
    }
};