// Leaders in an array

// LINK:- https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
        int maxi = -1;
        vector<int> ans;
        for(int i = n-1;i>=0;i--){
            if(a[i]>=maxi){
                ans.push_back(a[i]);
                maxi = a[i];
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};