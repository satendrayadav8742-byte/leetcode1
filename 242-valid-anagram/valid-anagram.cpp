class Solution {
public:
    bool isAnagram(string s, string t) {
            vector<int> check(26,0);
         if (s.length() != t.length())
            return false;
        for(int i=0;i<s.size();i++)
        {
            check[s[i] - 'a']++;
            check[t[i] - 'a']--;
        }
          for (int i = 0; i < 26; i++) {
            if(check[i] != 0)
                return false;
        }

        return true;


        
    }
};