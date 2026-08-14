class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>str;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(str.empty())
            str.push(s[i]);
            else if(str.top()==s[i])
            str.pop();
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