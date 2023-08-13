// Vertical Traversal of Binary Tree

// LINK:- https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,vector<int>> mp;
        // x axis and element
        
        queue<pair<Node*,int>> q;
        // node and x axis
        
        q.push({root,0});
        
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0;i<sz;i++){
                Node* n = q.front().first;
                int x = q.front().second;
                q.pop();
                
                mp[x].push_back(n->data);
                if(n->left){q.push({n->left,x-1});}
                if(n->right){q.push({n->right,x+1});}
            }
        }
        
        vector<int> ans;
        for(auto it: mp){
            for(auto itr:it.second){
                ans.push_back(itr);
            }
        }
        
        return ans;
    }
};