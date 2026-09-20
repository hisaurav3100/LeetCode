class Solution {
public:
    int subtractProductAndSum(int n) {
        int x=n;
        long long d,p=1,s=0,diff;
        while(x>0)
        {
            d=x%10;
            p=p*d;
            s=s+d;
            x=x/10;
        }
        diff=p-s;
        return diff;
        
        
    }
};