class Solution {
public:
    int lengthOfLastWord(string s) {
        int l= s.size();
        int count = 0;
        int end = l-1;
        while(end >= 0 && s[end]==' ')
        {
            end--;
        }

        for(int i=end;i>=0;i--)
        {
            if(s[i]==' ')
            {
                break;
            }
            else
            {
                count++;
            }
        }
        return count;
    }
};