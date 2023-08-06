// Bottom View of Binary Tree

// LINK:- https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0;i<sz;i++){
                Node* t = q.front().first;
                int pos = q.front().second;q.pop();
                
                mp[pos] = t->data;
                if(t->left){q.push({t->left,pos-1});}
                if(t->right){q.push({t->right,pos+1});}
            }
        }
        
        vector<int> ans;
        for(auto it: mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};