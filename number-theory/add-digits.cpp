class Solution {
public:
    int addDigits(int num) {
        long long d;
        if(num<=9)
        {
            return num;
        }
        while(num>9)
        {   int c=0;
            while(num>0)
            {
                d=num%10;
                c=c+d;
                num=num/10;
            }
            num=c;
        }
        return num;
    }
};