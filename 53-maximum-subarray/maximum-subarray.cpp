class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        ans[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            int sum=ans[i-1]+nums[i];
            if(sum>=nums[i])
            {
                ans[i]=sum;
            }
            else
            {
                ans[i]=nums[i];
            }
            
        }
        int maximum=ans[0];
        for(int i=1;i<n;i++)
        {
            if(maximum<ans[i])
            maximum=ans[i];
        }
        return maximum;

        
        
    }
};