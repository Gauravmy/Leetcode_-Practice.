class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int max=1;
        int count1=1;
        int count2=1;
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]<nums[i+1]){
                count1++;
            }
            else count1=1;
            if(nums[i]>nums[i+1]) count2++;
            else count2=1;
            int val=Math.max(count1,count2);
            max=Math.max(max,val);
        }
        return max;
    }
}