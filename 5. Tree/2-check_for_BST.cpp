// Check for BST

// LINK:- https://practice.geeksforgeeks.org/problems/check-for-bst/1

class Solution
{
    public:
    bool check(Node* root,int mini,int maxi){
        if(root==NULL){return true;}
        if(root->data>=maxi || root->data<=mini){return false;}
        
        return check(root->left,mini,root->data) && check(root->right,root->data,maxi);
    }
    
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        return check(root,INT_MIN,INT_MAX);
    }
};