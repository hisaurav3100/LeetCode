class Solution {
public:
    int findNumbers(vector<int>& nums) {int i,d,t=0;
                                        for( i=0;i<nums.size();i++){
                                            int c=0;
        while (nums[i]>0)
        {
        d=nums[i]%10;
        c++;
        nums[i]/=10;
        }
       if(c%2==0)
       t++;
                                        }   
        return t;
    }
};