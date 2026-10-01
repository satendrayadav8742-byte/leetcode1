class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        vector<int>lps(s.size());
        int suf=1;
        int pre=0;
        lps[0]=0;
        while(suf<s.size())
        {
            if(s[pre]==s[suf])
            {
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else
            {
                if(pre==0)
                {
                    lps[suf]=0;
                    suf++;
                }
                else
                {
                    pre=lps[pre-1];
                }
                
            }
        }
        int n=s.size();
        if(lps[n-1]&&n%(n-lps[n-1])==0)
        return true;
        return false;
        
    }
};//if(lps[n-1] > 0 && n % (n - lps[n-1]) == 0)