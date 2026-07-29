class Solution {
public:
    int jump(vector<int>& nums) {
        
        
        int n=nums.size();
        if(n==1)
        return 0;
        int sort =nums[0];
        int count =1;
        if(sort==0)
        return 0;
        
        int maxi=INT_MIN;
        for(int i=1;i<n-1;i++)
        {
            maxi=max(maxi,i+nums[i]);
            sort--;
            if(sort==0)
            {
                count++;
                sort=maxi-i;
                
            }
        
        }
        return count;
    }
};