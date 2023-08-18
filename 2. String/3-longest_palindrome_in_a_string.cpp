// Longest Palindrome in a String

// LINK:- https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1

class Solution {
  public:
  
    bool isPalindrome(string &s,int i,int j,vector<vector<int>> &dp){
        if(i>=j){return true;}
        
        if(dp[i][j]!=-1){return dp[i][j];}
        if(s[i]==s[j] && isPalindrome(s,i+1,j-1,dp)){
            return dp[i][j] = 1;
        }
        return dp[i][j] = 0;
    }  
  
    string longestPalin (string s) {
        // code here
        int n = s.length();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        
        string ans = "";
        for(int len = 1;len<=n;len++){
            for(int i = 0;i<=n-len;i++){
                int j = i + len - 1;
                
                if(s[i]==s[j] && isPalindrome(s,i+1,j-1,dp)){
                    if(len>ans.length()){
                        ans = s.substr(i,len);
                    }
                }
            }
        }
        
        return ans;
    }
};