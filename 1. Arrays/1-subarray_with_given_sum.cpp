// Subarray with given sum

// LINK:- https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        long long curr = 0;
        int i = 0,j=0;
        
        while(j<n){
            curr+=arr[j];
            if(curr>s){
                while(i<j && curr>s){
                    curr-=arr[i];i++;
            
                }
            }
            
            if(curr==s){return {i+1,j+1};}
            j++;
        }
        
        return {-1};
    }
};