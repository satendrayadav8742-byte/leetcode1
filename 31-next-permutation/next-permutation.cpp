class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int p1=n-1,p2=n-2;
        int pivot=0;
        while(p2>=0)
        {
            if(nums[p2]<nums[p1])
            {
                break;
            }
            else
            {
                p1--;
                p2--;
            }
        }
         if (p2 >= 0) {
            int i = n - 1;

            while (nums[i] <= nums[p2]) {
                i--;
            }

            swap(nums[p2], nums[i]);
        }

        
        reverse(nums.begin() + p2 + 1, nums.end());
    }
        
        
    
};