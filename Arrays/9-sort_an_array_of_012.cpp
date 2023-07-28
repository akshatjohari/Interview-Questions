// Sort an array of 0s, 1s and 2s

// LINK:- https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int start =0,mid=0,end = n-1;
        
        while(mid<=end){
            switch(a[mid]){
                case 0: swap(a[start],a[mid]);
                        start++;mid++;break;
                case 1: mid++;break;
                case 2: swap(a[mid],a[end]);
                        end--;break;
            }
        }
    }
    
};