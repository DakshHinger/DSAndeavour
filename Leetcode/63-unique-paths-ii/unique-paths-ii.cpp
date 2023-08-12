class Solution {
    int dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(i>=grid.size() || j>=grid[0].size() || grid[i][j]==1) return 0;
        if(i==grid.size()-1 && j==grid[0].size()-1) return 1;
        if(dp[i][j]!=0) return dp[i][j];
        return dp[i][j]=dfs(i+1,j,grid,dp)+dfs(i,j+1,grid,dp);
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),0));
        return dfs(0,0,grid,dp);
    }
};