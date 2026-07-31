class Solution {
public:
    int findMin(vector<int>& nums) {
        int minimum=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            minimum=min(minimum,nums[i]);
        }
        return minimum;
    }
};