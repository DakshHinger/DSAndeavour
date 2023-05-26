class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
       int n= grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]) return -1;
        vector<vector<int>> dist(n,vector<int>(n,1e9));
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        
        
        dist[0][0]=0;
        pq.push({0,0,0});
        // vector<int> v=pq.top();
        while(!pq.empty()){
            int row = pq.top()[1];            
            int col = pq.top()[2];
            pq.pop();
            int dx[]= { 0, 1, 0, -1, 1, 1, -1, -1 };
            int dy[]= { 1, 0, -1, 0, 1, -1, 1, -1 };
            
            for(int i=0;i<8;i++){
                int nr=row+dx[i];
                int nc=col+dy[i];
                if(nr>=0 and nc >=0 and nr<=n-1 and nc<=n-1 and grid[nr][nc]==0){
                    if(dist[row][col]+1<dist[nr][nc]){
                        dist[nr][nc]=dist[row][col]+1;
                        pq.push({dist[nr][nc], nr, nc});
                    }
                }
            }
        }
        return dist[n-1][n-1] == 1e9 ? -1: dist[n-1][n-1]+1  ;
  
    }
};