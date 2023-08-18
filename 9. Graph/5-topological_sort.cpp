// Topological sort

// LINK:- https://practice.geeksforgeeks.org/problems/topological-sort/1

class Solution
{
	public:
	
	void dfs(int node,vector<bool> &vis,stack<int> &st,vector<int> adj[]){
	    for(auto it: adj[node]){
	        if(!vis[it]){
	            vis[it] = true;
	            dfs(it,vis,st,adj);
	        }
	    }
	    
	    st.push(node);
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int> st;
	    vector<bool> vis(V,false);
	    for(int i = 0;i<V;i++){
	        if(!vis[i]){
	            vis[i] = true;
	            dfs(i,vis,st,adj);
	        }
	    }
	    
	    vector<int> ans;
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    
	    return ans;
	}
};