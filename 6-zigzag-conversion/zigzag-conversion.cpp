class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> rows(numRows);
        if(numRows==1)
        return s;
        int currow=0;
        bool down=true;
        for(int i=0;i<s.size();i++)
        {
            rows[currow]+=s[i];
            if(currow==0)
            down=true;
            if(currow==numRows-1)
            down=false;
            if(down)
            currow++;
            else
            currow--;
        }
        string ans;
        for(int i=0;i<numRows;i++)
        {
            ans+=rows[i];
        }
        return ans;
        
    }
};