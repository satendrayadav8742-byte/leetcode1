class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>freq(256,0);
        int second=0,len=0;
        for(int right=0;right<s.size();right++)
        {
            freq[s[right]]++;
            while(freq[s[right]]>1)
            {
                freq[s[second]]--;
                second++;
            }
            len=max(len,right-second+1);

        }
        return len;

    }
};