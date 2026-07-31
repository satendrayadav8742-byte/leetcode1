class Solution {
public:
    int findMin(vector<int>& nums) {
       
    //int minimum=INT_MAX;
    //    for(int i=0;i<nums.size();i++)
    //    {
    //     minimum=min(minimum,nums[i]);
    //    }
    //    return minimum;
        int start=0;
        int end=nums.size()-1;
        while(start<end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]>nums[end])
            {
                start=mid+1;
            }
            else if(nums[mid]<nums[end])
            {
                end=mid;
            }
            else
            {
                end--;
            }
        }
        return nums[start];
    }
};