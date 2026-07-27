class Solution {
public:
void findsubset(vector<int>& nums,int n,int index,vector<int>& temp,vector<vector<int>>& subset)
    {
        if(index==n)
        {
            subset.push_back(temp);
            return ;
        }
        findsubset(nums,n,index+1,temp,subset);
        temp.push_back(nums[index]);
        findsubset(nums,n,index+1,temp,subset);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        vector<int>temp;
        vector<vector<int>>subset;
        findsubset(nums,n,index,temp,subset);
        return subset;
        
    }
};