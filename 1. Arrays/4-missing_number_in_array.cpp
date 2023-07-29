// Missing number in array

// LINK:- https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int ans = 0;
        for(int i = 1;i<=n;i++){ans^=i;}
        
        for(int i = 0;i<n-1;i++){
            ans^=array[i];
        }
        
        return ans;
    }
};