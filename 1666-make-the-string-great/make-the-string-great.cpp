class Solution {
public:
    string makeGood(string s) {
        stack<char>str;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if (!str.empty() && abs(str.top() - s[i]) == 32) 
            {
                str.pop();
            }
            else
            str.push(s[i]);
        }
        while(!str.empty())
        {
            ans+=str.top();
            str.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;        
    }
};