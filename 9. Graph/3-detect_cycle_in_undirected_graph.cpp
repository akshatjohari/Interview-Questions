// Detect cycle in an undirected graph

// LINK:- https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  public:
    bool dfs(int node,int parent,vector<int> adj[],vector<bool>&vis){
        
        for(auto it:adj[node]){
            if(vis[it]==true){
                if(it!=parent){
                    return true;    
                }
            }else{
                vis[it] = true;
                if(dfs(it,node,adj,vis)){return true;}
            }
        }
        
        return false;
    }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vis(V,false);
        for(int i = 0;i<V;i++){
            if(!vis[i]){
                vis[i] = true;
                if(dfs(i,-1,adj,vis)){return true;}
            }
        }
        return false;
    }
};