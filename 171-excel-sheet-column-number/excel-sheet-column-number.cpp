class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        int n=columnTitle.size();
        for(int i=0;i<n;i++)
        {
            int p = pow(26,n-i-1);
            int s=columnTitle[i]-'A'+1;
            ans +=p*s;
        }
        return ans;
    }
};