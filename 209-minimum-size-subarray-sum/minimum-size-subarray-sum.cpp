class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int mins= INT_MAX;
        int sum=0;
        for(int j=0;j<nums.size();j++)
        {
            
            if(sum<target)
            {
                sum+=nums[j];
            }
            while(sum>=target)
            {
                 mins = min(mins, j-i+1);
                sum-=nums[i];
                i++;
            }

        } 
        if(mins==INT_MAX)
        return 0;
        return mins; 
    }
};