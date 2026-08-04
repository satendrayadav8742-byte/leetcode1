class Solution {
public:
int roman(char s)
{
    if(s=='I')
    return 1;
    else if(s=='V')
    return 5;
    else if(s=='X')
    return 10;
    else if(s=='L')
    return 50;
    else if(s=='C')
    return 100;
    else if(s=='D')
    return 500;
    else
    return 1000; 
}
    int romanToInt(string s) {
        int n=s.size();
        int sum=0;
        int end=1;
        for(int i=0;i<n-1;i++)
        {
            if(roman(s[i])>=roman(s[end]))
            {
                sum+=roman(s[i]);
                end++;
            }
            else
            {
                sum-=roman(s[i]);
                end++;
            }
        }
        sum+=roman(s[n-1]);
        return sum;
        
    }
};