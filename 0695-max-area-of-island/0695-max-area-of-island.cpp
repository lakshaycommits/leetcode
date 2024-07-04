class Solution {
public:
    int lands = 0;
    bool isValidIndex(int i, int j, vector<vector<int>>& grid) {
        return (i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j]);
    }
    void dfs(int i, int j, vector<vector<int>>& grid) {
        grid[i][j] = 0;
        lands++;
        if(isValidIndex(i, j + 1, grid))
            dfs(i, j + 1, grid);
        if(isValidIndex(i, j - 1, grid))
            dfs(i, j - 1, grid);
        if(isValidIndex(i - 1, j, grid))
            dfs(i - 1, j, grid);
        if(isValidIndex(i + 1, j, grid))
            dfs(i + 1, j, grid);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int area = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    dfs(i, j, grid);
                    area = max(lands, area);
                    lands = 0;
                }
            }
        }
        return area;
    }
};