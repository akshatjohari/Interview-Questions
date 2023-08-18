// Find the number of islands

// LINK:- https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1

class Solution {
  public:
    bool isValid(int i,int j,int n,int m){
        return i>=0 && j>=0 && i<n && j<m;
    }
  
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==false){
                    ans++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    vis[i][j] = true;
                    
                    while(!q.empty()){
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();
                        
                        for(int a = -1;a<=1;a++){
                            for(int b=-1;b<=1;b++){
                                int currRow = row + a;
                                int currCol = col + b;
                                
                                if(isValid(currRow,currCol,n,m) && grid[currRow][currCol]=='1' && !vis[currRow][currCol]){
                                    vis[currRow][currCol] = true;
                                    q.push({currRow,currCol});
                                }
                            }
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};