class Solution {
public:
     bool check(int start,int end,string s)
    {
        while(start<end)
        {
            if(s[start]!=s[end])
            return false;
            else
            start++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int start=0;
        int n=s.size();
        int end =n-1;
        while(start<end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            {
                return check(start+1,end,s)||check(start,end-1,s);
            }
            
        }
        return true;
    }
};