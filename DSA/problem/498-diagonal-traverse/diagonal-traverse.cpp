class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> diagonal(m + n - 1);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                diagonal[i + j].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
        for(int d = 0; d < m + n - 1; d++){
            if(d % 2 == 0){
                reverse(diagonal[d].begin(), diagonal[d].end());
            }
            for(int num : diagonal[d]){
                ans.push_back(num);
            }
        }
        return ans;
    }
};