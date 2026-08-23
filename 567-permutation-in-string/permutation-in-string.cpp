class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>str(26,0);
        vector<int>num(26,0);
        for(int i=0;i<s1.size();i++)
        {
           str[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++)
        {
            num[s2[i]-'a']++;
           
    
            if(i >= s1.size())
            {
                num[s2[i-s1.size()]-'a']--;
            }
            if(num==str)
            {
                return true;
            }
        }
        return false;

        
    }
};