// BFS of graph

// LINK:- https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> vis(V,false);
        
        queue<int> q;
        q.push(0);
        vis[0] = true;
        
        while(!q.empty()){
            int sz= q.size();
            for(int i = 0;i<sz;i++){
                int curr = q.front();q.pop();
                ans.push_back(curr);
                for(auto it: adj[curr]){
                    if(!vis[it]){
                        vis[it] = true;
                        q.push(it);    
                    }
                }
            }
        }
        
        return ans;
    }
};