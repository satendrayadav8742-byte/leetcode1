class Solution {
public:
    string reverseWords(string s) {
        stack<string>str;
        int n=s.size();
        string temp="";
        for(int i=0;i<n;i++)
        {
            
            if(s[i]!=' ')
            temp+=s[i];
            else if(!temp.empty())
            {
                str.push(temp);

                temp="";
            }

        }
        if(!temp.empty())
        str.push(temp);
        string ans="";
        while(!str.empty())
        {
            ans+=str.top();
            str.pop();
            if(!str.empty())
            ans+=" ";
        }
        return ans;
       
        
    }
};