// Roman Number to Integer

// LINK:- https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1

class Solution {
  public:
    int value(char ch){
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
    }
  
    int romanToDecimal(string &str) {
        // code here
        int prevMax = 0;
        
        int ans = 0;
        for(int i = str.length()-1;i>=0;i--){
            int val = value(str[i]);
            if(val>=prevMax){
                ans+=val;
                prevMax = val;
            }else{
                ans-=val;
            }
        }
        
        return ans;
    }
};