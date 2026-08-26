class Solution {
public:
    bool check(string s, string word)
    {
        int i=0;
        int j=0;
        while(i<s.size()&&j<word.size())
        {
            int start=i;
            int last=j;
            if(s[start]!=word[last])
            return false;
            while(i<s.size()&& s[i]==s[start])
            {
                i++;
            }
            while(j<word.size()&&word[j]==word[last])
            {
                j++;
            }
            int countS=i-start;
            int countword=j-last;
            if(countS<3&&countS!=countword)
            return false;
            if(countS<countword)
            return false;
        }
        return i==s.size() && j==word.size();
    }
    int expressiveWords(string s, vector<string>& words) {
        int ans=0;
        int n= words.size();
        for(int i=0;i<n;i++)
        {
            if (check(s, words[i]))
            ans++;
        }
        return ans;
        
    }
};