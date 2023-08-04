// Parenthesis Checker

// LINK:- https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    
    char rev(char ch){
        if(ch=='}'){return '{';}
        else if(ch==')'){return '(';}
        return '[';
    }
    
    bool ispar(string x)
    {
        // Your code here
        int n = x.length();
        stack<char> st;
        for(int i = 0;i<n;i++){
            if( x[i]=='{' || x[i]=='(' || x[i]=='['){st.push(x[i]);}
            else{
                if(st.empty()){return false;}
                if(st.top()==rev(x[i])){st.pop();}
                else{return false;}
            }
        }
        
        return st.empty();
    }

};