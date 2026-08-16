class Solution {
public:
    int myAtoi(string s) {
        string ans="";
        int sign=1;
        long long num =0;
        int i=0;
        while(i<s.size()&&s[i]==' ')
        {
            i++;
        }
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
        {
            i++;
        }
        while(i<s.size()&&isdigit(s[i]))
        {
            num=num*10+(s[i]-'0');
            if(sign==1&&num>INT_MAX)
            {
                return INT_MAX;
            }
            else if(sign==-1&&-num<INT_MIN)
            {
                return INT_MIN;
            }
            else
            i++;
        }
        return sign*num;
        
    }
};