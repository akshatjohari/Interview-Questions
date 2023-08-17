// Remove Duplicates

// LINK:- https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1

class Solution{
public:	
		
	string removeDups(string s) 
	{
	    // Your code goes here
	    vector<int> arr(26,0);
	    string ans  = "";
	    for(int i  =0;i<s.length();i++){
	        if(arr[s[i]-'a']==0){
	            ans += s[i];
	            arr[s[i]-'a']++;
	        }
	    }
	    
	    return ans;
	}
};