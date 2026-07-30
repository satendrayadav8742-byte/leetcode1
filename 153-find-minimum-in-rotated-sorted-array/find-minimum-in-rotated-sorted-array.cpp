class Solution {
public:
    int findMin(vector<int>& nums) {

//         int minimum=INT_MAX;
//         int n=nums.size();
//         for(int i=-0;i<n;i++)
//         {
//             if(i==0||i==n-1)
//             {
//                 minimum=min(minimum,nums[i]);
//             }
//             else
//             {
//                 if(nums[i-1]>nums[i]&&nums[i+1]>nums[i]);
//                 return nums[i];
//             }
//         }
//         return minimum;
    //by binary search
    int start=0;
    int n=nums.size();
    int end=n-1;
    while(start<end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]<nums[end])
        {
            end=mid;
        }
        else
        {
            start=mid+1;
        }
    }
    return nums[start];
        
    }
};