// Equilibrium Point

// LINK:- https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long f[n],b[n];
        
        f[0] = a[0];
        b[n-1] = a[n-1];
        for(int i = 1;i<n;i++){
            f[i] = a[i] + f[i-1];
            b[n-i-1] = a[n-i-1] + b[n-i];
        }
        
        for(int i = 0;i<n;i++){
            if(f[i]==b[i]){return i+1;}
        }
        return -1;
    }

};