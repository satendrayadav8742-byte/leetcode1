class Solution {
public:
    string longestPalindrome(string s) {
        int maxim=1;
        int start=0;
        int end=-1;
        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            int left=i;
            int right=i;
            while(left>=0&&right<n&&s[left]==s[right])
            {
                if(maxim<right-left+1)
                {
                    maxim=right-left+1;
                    start=left;
                }
                left--;
                right++;
            }    
            left=i;
            right=i+1;
            while(left>=0&&right<n&&s[left]==s[right])
            {
                if(maxim<right-left+1)
                {
                    maxim=right-left+1;
                    start=left;
                }
                left--;
                right++;
            }    
        }
        return s.substr(start,maxim);
    }
};