class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int d,b=0,s=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<10)
        s=s+nums[i];
        else
        b=b+nums[i];

    }
     
        

        
    
    return s!=b;
    }
};