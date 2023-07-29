// Reverse words in a given string

// LINK:- https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        int n = (int) s.length();
        
        stack<string> st;
        string temp = "";
        for(int i = 0;i<n;i++){
            if(s[i]=='.'){
                st.push(temp);
                temp = "";
            }else{
                temp+=s[i];
            }
        }
        st.push(temp);
        
        string ans = "";
        while(!st.empty()){
            ans+=st.top();st.pop();
            ans+='.';
        }
        
        ans.pop_back();
        return ans;
    } 
};