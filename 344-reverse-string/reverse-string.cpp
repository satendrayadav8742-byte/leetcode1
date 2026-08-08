class Solution {
public:
    void reverseString(vector<char>& s) {
        //first method by pointer
        // //second method by stack
        // stack<char>st;
        // for(int i=0;i<s.size();i++)
        // {
        //     st.push(s[i]);
        // }
        // int i=0;
        // while(!st.empty())
        // {
        //     s[i]=st.top();
        //     i++;
        //     st.pop();
       // }
        //in this code take sc is o(n)so we use two pointer approach
        int n= s.size();
        int start = 0;
        int end = n-1 ;
        while(start<end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};