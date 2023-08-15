// Level order traversal in spiral form

// LINK:- https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1

vector<int> findSpiral(Node *root){
    //Your code here
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    
    bool flag = false;
    while(!q.empty()){
        int sz = q.size();
        vector<int> temp;
        for(int i = 0;i<sz;i++){
            Node* n = q.front();q.pop();
            temp.push_back(n->data);
            
            if(n->left){q.push(n->left);}
            if(n->right){q.push(n->right);}
        }
        
        if(flag){
            for(int i = 0;i<sz;i++){ans.push_back(temp[i]);}
        }else{
            for(int i = sz-1;i>=0;i--){ans.push_back(temp[i]);}   
        }
        
        
        flag = !(flag);
    }
    
    return ans;
}