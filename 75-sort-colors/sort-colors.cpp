class Solution {
public:
    void sortColors(vector<int>& nums) {
       /* int n = nums.size();
        int countR = 0, countW = 0, countB = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 0)
                countR++;
            else if(nums[i] == 1)
                countW++;
            else
                countB++;
        }

        for(int i = 0; i < countR; i++)
            nums[i] = 0;

        for(int i = countR; i < countR + countW; i++)
            nums[i] = 1;

        for(int i = countR + countW; i < n; i++)
            nums[i] = 2;*/
        int n = nums.size();
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[index]);
                index++;
            }

        }   
        for(int i=index;i<n;i++)
        {
            if(nums[i]==1)
            {
                swap(nums[i],nums[index]);
                index++;
            }
        } 
    }
    


};