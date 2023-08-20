// Minimum Operations

// LINK:- https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1

class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        if(n==1){return 1;}
        if(n%2==1){
            return 2 + minOperation(n/2);
        }
        
        return 1+minOperation(n/2);
    }
};