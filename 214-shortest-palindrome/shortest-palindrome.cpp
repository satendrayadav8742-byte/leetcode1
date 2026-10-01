class Solution {
public:
    string shortestPalindrome(string s) {
       
        string s1=s;
        string s2=s;
        s1+='$';
        reverse(s2.begin(),s2.end());
        s1+=s2;
        int suf=1;
        int pre=0;
        int n=s1.size();
        vector<int>lps(s1.size(),0);
        while(suf<n)
        {
            if(s1[pre]==s1[suf])
            {
                lps[suf]=pre+1;
                suf++;
                pre++;
            }
            else
            {
                if(pre==0)
                {
                    suf++;
                }
                else
                {
                    pre=lps[pre-1];
                }
            }
        }
        int n1=lps[n-1];
        string s3=s.substr(n1);
        reverse(s3.begin(),s3.end());
        s3+=s;
        return s3;

        
    }
};