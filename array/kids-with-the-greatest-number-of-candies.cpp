class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=0;
        int n=candies.size();
        for(int i=0;i<n;++i)
        {
            if(maxi<candies[i])
            {
                maxi=candies[i];

            }
        }
    vector<bool> a(n);
    for(int i=0;i<n;i++)
    {
        if(extraCandies + candies[i]>=maxi)
        {
            a[i] = true;
        }
        else{
            a[i]= false;
        }
    }
    return a;

        
    }
};