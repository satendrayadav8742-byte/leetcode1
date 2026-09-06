class Solution {
public:
    void subset(int index, vector<int>& temp, vector<vector<int>>& ans,
                int n, vector<int>& nums)
    {
        ans.push_back(temp);   
        for(int i=index;i<nums.size();i++)
        {
            if(i > index && nums[i] == nums[i - 1])
            continue;
            temp.push_back(nums[i]);
            subset(i+1,temp,ans,n,nums);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        int index=0;
        subset(index,temp,ans,n,nums);
        return ans;
        
        
    }
};