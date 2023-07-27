// Count the tripplets

// LINK:- https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    map<int,int> mp;
	    for(int i = 0;i<n;i++){mp[arr[i]]++;}
	    
	    int ans = 0;
	    for(int i = 0;i<n-1;i++){
	        for(int j = i+1;j<n;j++){
	            if(mp.find(arr[i]+arr[j])!=mp.end()){
	                ans+=mp[arr[i]+arr[j]];
	            }
	        }
	    }
	    
	    return ans;
	}
};