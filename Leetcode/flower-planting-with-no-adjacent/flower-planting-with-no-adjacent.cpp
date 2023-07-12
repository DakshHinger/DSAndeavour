class Solution {
public:
    bool isSafe(int node,int col,  vector<int> &color,unordered_map<int,vector<int>> &adj)
    {
        for(auto v : adj[node]){
            if(color[v-1]==col) return false;
        }
        return true;
    }
    bool solve(int node, int m , int n, vector<vector<int>> &paths, vector<int> &color, unordered_map<int,vector<int>> &adj ){
        if(node==n+1){
            return true;
        }
        for(int col=1;col<=m;col++){
            if(isSafe(node,col,color,adj)){
                color[node-1]=col;
                if(solve(node+1,m,n,paths,color, adj)==true) return true;
                color[node-1]=0;
            }
        }
        return false;
    }
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        // This is the m coloring problem
        // no of flowers that is the colors we can choose are 4
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<paths.size();i++){
            adj[paths[i][0]].push_back(paths[i][1]);
            adj[paths[i][1]].push_back(paths[i][0]);
        }
        vector<int> color(n,0);
        int m = 4;
        bool ans = solve(1,m,n,paths,color,adj);
        return color;
    }
};