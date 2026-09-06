class Solution {
public:
    void permutation(vector<int>& nums,vector<int>& temp,vector<bool>& visit,vector<vector<int>>& ans)
    {
        if(temp.size()==visit.size())
        {
            ans.push_back(temp);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(visit[i]==0)
            {
                temp.push_back(nums[i]);
                visit[i]=1;
                permutation(nums,temp,visit,ans);
                visit[i]=0;
                temp.pop_back();
            }

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        vector<bool>visit(nums.size(),0);
        vector<vector<int>> ans;
        permutation(nums,temp,visit,ans);
        return ans;
    }
};