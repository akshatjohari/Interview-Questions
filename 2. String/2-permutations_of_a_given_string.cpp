// Permutations of a given string

// LINK:- https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

class Solution
{
	public:
	    void rec(int n,string &temp,string s,map<string,int> &mp,vector<bool> &vis){
	        if(temp.size()==n){mp[temp]++;return;}
	            
	        for(int i = 0;i<n;i++){
	            if(!vis[i]){
	                 vis[i] = true;
	                 temp+=s[i];
	                rec(n,temp,s,mp,vis);
	                vis[i] = false;
	                temp.pop_back();
	            }
	        }
	    }
	
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    int n = s.length();
		    vector<bool> vis(n,false);
		    map<string,int> mp;
		    vector<string> ans;
		    string temp = "";
		    rec(n,temp,s,mp,vis);
		    for(auto it:mp){
		        ans.push_back(it.first);
		    }
		    return ans;
		}
};