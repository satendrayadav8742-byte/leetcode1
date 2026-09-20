class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        int i=0;
        int j=1;
        int gap=INT_MIN;
        if(nums.size()<2)
        return 0;
        sort(nums.begin(),nums.end());
        while(i<nums.size()-1)
        {
            gap=max(gap,nums[j]- nums[i]);
            i++;
            j++;
        }
        return gap;
    }
};