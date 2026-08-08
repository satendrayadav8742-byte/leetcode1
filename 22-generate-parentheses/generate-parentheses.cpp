class Solution {
public:

    void generateparenthesis(int n,int left,int right,string temp,vector<string>&ans)
    {
        if(left+right==2*n)
        {
            ans.push_back(temp);
            return;
        }
        if(left<n)
        {
            temp.push_back('(');
            generateparenthesis(n,left+1,right,temp,ans);
            temp.pop_back();
        }
        if(right<left)
        {
            temp.push_back(')');
            generateparenthesis(n,left,right+1,temp,ans);
            temp.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        int left=0;
        int right=0;
        generateparenthesis(n,left,right,temp,ans);
        return ans;
    }
};