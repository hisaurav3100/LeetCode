class Solution {
public:
    int reverse(int x) {
        long long r=0;
        int d;
        int n=x;
        while(n!=0)
        {
            d=n%10;
            r=r*10+d;
            n=n/10;
         
        }
        if (r>INT_MAX || r<INT_MIN)
        {
            return 0;
        }
        return(int(r));

        
    }
};