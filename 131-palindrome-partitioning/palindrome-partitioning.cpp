class Solution {
public:
    bool ispalidrome(int start,int end,string& s )
    {
        while(start<end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            return false;
        }
        return true;
    }
    void solve(string& s,int start,vector<string>&temp,vector<vector<string>>&ans)
    {
        if(start==s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int end=start;end<s.size();end++)
        {
            if(ispalidrome(start,end,s))
            {
                temp.push_back(s.substr(start, end - start + 1));
                solve(s,end+1,temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>ans;
        int start=0;
        solve(s,start,temp,ans);
        return ans;
        
    }
};