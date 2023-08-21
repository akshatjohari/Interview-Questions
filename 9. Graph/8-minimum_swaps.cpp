// Minimum Swaps to Sort

// LINK:- https://practice.geeksforgeeks.org/problems/minimum-swaps/1

class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size();
	    
	    vector<int> temp(nums);
	    sort(temp.begin(),temp.end());
	    
	    unordered_map<int,int> mp;
	    for(int i = 0;i<n;i++){
	        mp[nums[i]] = i;    
	    }
	    
	    int count = 0;
	    for(int i = n-1;i>=0;i--){
	        if(nums[i]!=temp[i]){
	            int idx = mp[temp[i]];
	            mp[nums[i]] = idx;
	            swap(nums[i],nums[idx]);
	            count++;
	        }
	    }
	    
	    return count;
	}
};