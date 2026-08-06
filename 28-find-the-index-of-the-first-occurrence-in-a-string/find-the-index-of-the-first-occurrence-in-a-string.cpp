class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m= needle.size();
        for(int i=0;i<n;i++)
        {
            int first=i,second=0;
            while(m>second)
            {
                if(haystack[first]!=needle[second])
                {
                    break;
                }
                else
                {
                    second++;
                    first++;
                }

            }
            if(second==m)
            return i;
        }
        return -1;
        
    }
};