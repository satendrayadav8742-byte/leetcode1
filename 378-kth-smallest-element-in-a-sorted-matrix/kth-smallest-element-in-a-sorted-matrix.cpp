class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> temp(rows*cols);

        for(int i = 0; i < rows*cols; i++)
        {
            int row_index =  i/cols;
            int col_index = i%cols;
            temp[i]=matrix[row_index][col_index];
        }
        sort(temp.begin(),temp.end());
        return temp[k-1];
    }
};  