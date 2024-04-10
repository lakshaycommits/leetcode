class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> vis(m, vector<int> (n, 1));
        
        for(int row = 0; row < m; row++) {
            for(int col = 0; col < n; col++) {
                if(matrix[row][col] != 0)
                    continue;
                for(int p = 0; p < n; p++)
                    vis[row][p] = 0;
                for(int p = 0; p < m; p++)
                    vis[p][col] = 0;
            }
        }
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(vis[i][j] == 0)
                    matrix[i][j] = 0;
            }
        }
        
    }
};