class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Slow aur fast pointers ko move karenge.
        // Slow 1 step, fast 2 steps chalega.
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Phase 2: Ek pointer starting position par le aao.
        int entry = nums[0];

        // Dono pointers ko 1-1 step move karenge.
        // Jahan dono milenge, wahi duplicate number hai.
        while (entry != slow) {
            entry = nums[entry];
            slow = nums[slow];
        }

        return entry;
    }
};