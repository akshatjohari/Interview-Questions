// Rearrange Array Alternately

// LINK:- https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int maxi = arr[n-1]+1;
    	int first = 0, last = n-1;
    	for(int i = 0;i<n;i++){
    	    if(!(i&1)){
    	        arr[i]+= (arr[last]%maxi)*maxi;
    	        last--;
    	    }else{
    	        arr[i]+=(arr[first]%maxi)*maxi;
    	        first++;
    	    }
    	}
    	
    	for(int i = 0;i<n;i++){arr[i]/=maxi;}
    }
};