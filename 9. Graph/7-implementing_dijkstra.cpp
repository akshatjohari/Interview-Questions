// Implementing Dijkstra Algorithm

// LINK:- https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        int inf = 1e9;
        vector<int> ans(V,inf);
        
        ans[S] = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,S});
        
        while(!pq.empty()){
            int dis = pq.top().first;
            int u = pq.top().second;
            pq.pop();
            
            for(auto it: adj[u]){
                int v = it[0];
                int d = it[1];
                
                if(dis + d < ans[v]){
                    ans[v] = dis + d;
                    pq.push({ans[v],v});
                }
            }
        }
        
        return ans;
    }
};