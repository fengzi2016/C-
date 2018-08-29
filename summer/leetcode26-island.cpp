//深度优先：只有四个方向都不1的1才能算岛，深度优先减少了赋true的次数
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0)return 0;
        int m = grid.size(),n= grid[0].size();
        vector<vector<bool> > visited(m, vector<bool>(n, false));
        int res = 0;
        for(int i= 0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j]=='1'&&!visited[i][j]){
                    DFS(grid,visited,i,j);
                    res++;
                }
            }
        }
        return res;
        
    }
    void DFS(vector<vector<char>>& grid, vector<vector<bool>>& visited , int x, int y ) {
        if(x<0||x>=grid.size()) return;
        if(y<0||y>=grid[0].size())return;
        if(visited[x][y]||grid[x][y]!='1')return;
        visited[x][y] = true;
        DFS(grid,visited,x-1,y);
        DFS(grid,visited,x+1,y);
        DFS(grid,visited,x,y+1);
        DFS(grid,visited,x,y-1);
    }
};