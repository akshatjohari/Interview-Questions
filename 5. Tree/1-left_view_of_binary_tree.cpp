// Left View of Binary Tree

// LINK:- https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

vector<int> leftView(Node *root)
{
   // Your code here
   if(root==NULL){return {};}
   queue<Node*> q;
   q.push(root);
   
   vector<int> ans;
   while(!q.empty()){
        int n = q.size();
        for(int i = 0;i<n;i++){
            Node* curr = q.front();q.pop();
            if(i==0){ans.push_back(curr->data);}
            
            if(curr->left!=NULL){q.push(curr->left);}
            if(curr->right!=NULL){q.push(curr->right);}
        }
   }
   
   return ans;
}