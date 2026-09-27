class Solution {
public:
    string solve(string &s,int &i)
    {
        int num=0;
        string ans ="";
        while(i<s.size()&&s[i]!=']') 
        {
            if(isdigit(s[i]))
            {
                num=num*10+(s[i]-'0');
                i++;
            }
            else if(s[i]=='[')
            {
                i++;
                string inside=solve(s,i);
                i++;
                for(int j=0;j<num;j++)
                {
                    ans+=inside;
                }
                num=0;
            }
            
            else{
                ans+=s[i];
                i++;
            }   
            
        }
        return ans;
    }
    string decodeString(string s) {
        int i=0;
        return solve(s,i);
    }
};