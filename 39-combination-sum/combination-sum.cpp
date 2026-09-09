class Solution {
public:
   void solve( vector<vector<int>>& ans,vector<int>& temp,vector<int>& nums, int target,int sum,int index)
    {
        if(sum==target)
        {
            ans.push_back(temp);
            return ;
        }
        if(sum>target)
        return ;
        for(int i=index;i<nums.size();i++)
        {
            sum+=nums[i];
            temp.push_back(nums[i]);
            solve(ans,temp,nums,target,sum,i);
            sum-=nums[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int sum=0;
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,temp,nums,target,sum,0);
        return ans;
    }
};