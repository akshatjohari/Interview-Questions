// Minimum Platforms

// LINK:- https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int i = 0,j=0;
    	int currPlatform = 0;
    	int ans = 0;
    	
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	       // need one platform
    	       currPlatform++;
    	       ans = max(ans,currPlatform);
    	       i++;
    	    }else{
    	       // if less than reduce one need of more platform 
    	        currPlatform--;
    	        j++;
    	    }
    	}
    	
    	return ans;
    }
};