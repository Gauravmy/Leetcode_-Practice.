class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {

            // Same number pehle mil chuka hai
            if(mp.count(nums[i]) && i - mp[nums[i]] <= k)
                return true;

            // Latest index store karo
            mp[nums[i]] = i;
        }

        return false;
    }
};