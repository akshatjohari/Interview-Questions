// Recursively remove all adjacent duplicates

// LINK :- https://practice.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates0744/1

class Solution{
public:
    string rremove(string s){
        // code here
        int n = (int) s.length();
        
        stack<char> st;
        for(int i = 0;i<n;i++){
            if(!st.empty() && st.top()==s[i]){
                while(!st.empty() && st.top()==s[i]){
                    i++;
                }
                st.pop();
            }
            st.push(s[i]);
        }
        
        string ans = "";
        while(!st.empty()){
            ans+=st.top();st.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans.length()==s.length()){return s;}
        return rremove(ans);
    }
};