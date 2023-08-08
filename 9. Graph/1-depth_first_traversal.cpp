// DFS of Graph

// LINK:- https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution {
  public:
    void dfs(int node,vector<int> &ans,vector<bool> &vis,vector<int> adj[]){
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it] = true;
                ans.push_back(it);
                dfs(it,ans,vis,adj);
            }
        }
    }
  
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> vis(V,false);
        
        for(int i = 0;i<V;i++){
            if(!vis[i]){
                ans.push_back(i);
                vis[i] = true;
                dfs(i,ans,vis,adj);
            }    
        }
        
        return ans;
    }
};