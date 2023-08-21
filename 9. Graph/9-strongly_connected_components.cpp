// Strongly Connected Components (Kosaraju's Algo)

// LINK:- https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1

class Solution
{
	public:
	void dfs(int node,vector<bool> &vis,stack<int> &st,vector<vector<int>> &adj){
	    for(auto it: adj[node]){
	        if(!vis[it]){
	            vis[it] = true;
	            dfs(it,vis,st,adj);
	        }
	    }
	    
	    st.push(node);
	}
	
	void goForIt(int node,vector<int> adj[],vector<bool> &vis){
	    for(auto it: adj[node]){
	        if(!vis[it]){
	            vis[it] = true;
	            goForIt(it,adj,vis);
	        }
	    }
	}
	
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        stack<int> st;
        vector<bool> vis(V,false);
        for(int i = 0;i<V;i++){
            if(!vis[i]){
                vis[i] = true;
                dfs(i,vis,st,adj);
            }
        }
        
        
        vector<int> revAdj[V];
        for(int i = 0;i<V;i++){
            for(int j = 0;j<adj[i].size();j++){
                int v = adj[i][j];
                
                revAdj[v].push_back(i);
            }
        }
        
        int count = 0;
        vis.assign(V,false);
        
        while(!st.empty()){
            int t = st.top();st.pop();
            if(!vis[t]){
                count++;
                vis[t] = true;
                goForIt(t,revAdj,vis);
            }
        }
        
        return count;;
    }
};