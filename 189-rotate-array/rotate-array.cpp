class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end()); //sab ko reverse karo phir 
        reverse(nums.begin(),nums.begin()+k);//begin se k tK
        reverse(nums.begin()+k,nums.end());//K SE sabhi ko
        
    }
};