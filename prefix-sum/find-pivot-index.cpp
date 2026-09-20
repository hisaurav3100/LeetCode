class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int s=0,i;
        for(i=0;i<n;i++)
        {
            s+=nums[i];
        }
        int left=0;
        int right=0;
        for(i=0;i<n;i++)
        {
            right=s-nums[i]-left;
            if(right==left)
            return i;
            left+=nums[i];
        }
        return -1;
    }
};