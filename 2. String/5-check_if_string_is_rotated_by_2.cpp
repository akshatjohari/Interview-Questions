// Check if string is rotated by two places

// LINK:- https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1

class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n  = str1.length();
        if(n<=2){return str1==str2;}
        if(n!=str2.length()){return false;}
        
        string a = str1.substr(2,n-2) + str1.substr(0,2);
        string b = str1.substr(n-2,2) + str1.substr(0,n-2);
        
        return (a==str2 || b==str2);
    }

};