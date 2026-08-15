class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans =0;
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
};