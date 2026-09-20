class Solution {
public:
    bool isPalindrome(int x) {
        
        int d;
        long long rev=0;
        int n=x;
        while(x>0)
        {
        d=x%10;
        rev=rev * 10 + d;
        x=x/10;
        }
        if(n==rev)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }  
};