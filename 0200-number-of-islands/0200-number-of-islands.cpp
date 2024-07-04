class Solution {
public:
    bool isValidIndex(int i, int j, vector<vector<char>>& grid) {
        return (i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == '1');
    }
    void dfs(int i, int j, vector<vector<char>>& grid) {
        grid[i][j] = '0';
        if(isValidIndex(i, j + 1, grid))
            dfs(i, j + 1, grid);
        if(isValidIndex(i, j - 1, grid))
            dfs(i, j - 1, grid);
        if(isValidIndex(i + 1, j, grid))
            dfs(i + 1, j, grid);
        if(isValidIndex(i - 1, j, grid))
            dfs(i - 1, j, grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int islands = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {   
                if(grid[i][j] == '1') {
                    islands++;
                    dfs(i, j, grid);
                }
            }
        }
        return islands;
    }
};