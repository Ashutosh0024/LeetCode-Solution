class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int len = 0;
        vector<vector<int>> ans;
        for(int i=0;i < matrix[0].size();i++)
        {
            vector<int> inner;
            for(int j=0;j < matrix.size();j++)
            {
                inner.push_back(matrix[j][len]);
            }
            ans.push_back(inner);
            len++;
        }
        return ans;
        
    }
};