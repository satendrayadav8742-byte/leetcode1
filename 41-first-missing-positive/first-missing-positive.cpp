class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        while(i<n)
        {
             if(1<=nums[i]&&nums[i]<=n&&nums[i]!=nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);

            }
            else
            i++;
        }
        for(int j=0;j<n;j++)
        {
            if(j+1!=nums[j])
            return j+1;
        }
        return n+1;
        
        
    }
};