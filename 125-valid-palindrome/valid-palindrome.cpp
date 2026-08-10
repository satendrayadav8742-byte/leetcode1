class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string str;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                str+=s[i];
            }
            else if('A'<=s[i] && s[i]<='Z')
                str+=tolower(s[i]);
            else if('0'<=s[i]&&s[i]<='9')
            {
                str+=s[i];
            }

        }
        int start=0;
        int end=str.size()-1;
        while(start<end)
        {
            if(str[start]==str[end])
            {
                start++;
                end--;
            }
            else
            return false;
        }
        return true;
        
    }
};