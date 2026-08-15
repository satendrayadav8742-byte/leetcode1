class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        int index=0;
        stack<int>str;
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            while(!str.empty()&&heights[str.top()]>=heights[i])
            {
                index=str.top();
                str.pop();
                if(!str.empty())
                {
                    ans=max(ans,(heights[index])*(i-str.top()-1));
                }
                else
                {
                    ans= max(ans,heights[index]*i);
                }

            }
            str.push(i);
        }
        while(!str.empty())
        {
            index=str.top();
            str.pop();
            if(!str.empty())
            ans=max(ans,(heights[index])*(n-str.top()-1));
            else
            ans=max(ans,(heights[index])*(n));
        }
        return ans;
    
        
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty())
        return 0;
        int row=matrix.size();
        int col=matrix[0].size();
        int ans=0;
        vector<int>heights(col,0);
        for(int i = 0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]=='0')
                heights[j]=0;
                else
                heights[j]++;
            }
            ans=max(ans,largestRectangleArea(heights));
        }
        return ans;
        
    }
};