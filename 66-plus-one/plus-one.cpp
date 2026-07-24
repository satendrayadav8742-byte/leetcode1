class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carry=1;
        for(int i=n-1;i>=0;i--)
        {
            int sum2=digits[i]+carry;
            carry=sum2/10;
            digits[i]=sum2%10;
            if(carry==0)
            return digits;
        }
        if(carry==1)
        {
            digits.insert(digits.begin(),1);
            return digits;

        }
        return digits;
    }   
};