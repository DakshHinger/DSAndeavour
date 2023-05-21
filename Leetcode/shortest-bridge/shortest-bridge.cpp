class Solution {
public:
    vector<pair<int, int>> A;
    vector<pair<int, int>> B;
    
    int dx[4] = {0, 1, -1, 0};
    int dy[4] = {1, 0, 0, -1};
    
    void flood_fill(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& visited, vector<pair<int, int>>& arr) {
        if ((i > grid.size()-1 || i < 0 || j > grid[0].size()-1 || j < 0) || !grid[i][j] || visited[i][j]) return;
        visited[i][j] = true;
        arr.push_back(make_pair(i, j));
        for (int k=0; k<4; k++) {
            flood_fill(grid, i+dx[k], j+dy[k], visited, arr);
        }
    }
    
    int getDist(pair<int, int>& p1, pair<int, int>& p2) {
        return abs(p1.first - p2.first) + abs(p1.second - p2.second) - 1;
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        bool doneA = false;
        for (int i=0; i<grid.size(); i++) {
            for (int j=0; j<grid[0].size(); j++) {
                if (grid[i][j] && !visited[i][j]) {
                    vector<pair<int, int>>* arr = (doneA) ? &B : &A;
                    flood_fill(grid, i, j, visited, *arr);
                    doneA = ~doneA;
                }
            }
        }
        int minDistance = 2 * grid.size()-1;
        for (auto p1 : A) {
            for (auto p2 : B) {
                minDistance = min(minDistance, getDist(p1, p2));
            }
        }
        return minDistance;
    }
};