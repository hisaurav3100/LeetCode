class Solution {
    public int alternatingSum(int[] nums) {
        int i;
        int s1=0;
        for (i=0;i<nums.length;i++)
        {
            if(i%2==0)
            {
                s1=s1+nums[i];
            }
            else
            {
                s1=s1-nums[i];
            }
        }
        return s1;
    }
}