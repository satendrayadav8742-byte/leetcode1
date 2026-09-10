 class Solution {
 public:
    void solve(vector<vector<int>>& ans,vector<int>& candidates, vector<bool>& used,vector<int>& temp,int target,int sum,int index)
    {
        if(sum==target)
        {
            ans.push_back(temp);
            return ;
        }
        if(target<sum)
        {
            return ;
        }
        for(int i=index;i<candidates.size();i++)
        {
            if(used[i])
            continue;
            if(i>0&&candidates[i]==candidates[i-1]&&!used[i-1])
            {
                continue;
            }
            sum+=candidates[i];
            used[i]=true;
            temp.push_back(candidates[i]);
            solve(ans,candidates,used,temp,target,sum,i);
            sum-=candidates[i];
            temp.pop_back();
            used[i]=false;
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<bool>used(candidates.size(),false);
        vector<int> temp;
        vector<vector<int>>ans;
        solve(ans,candidates,used,temp,target,0,0);
        return ans;
   } 
};
