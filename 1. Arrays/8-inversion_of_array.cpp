// Count Inversions

// LINK:- https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long merge(long long arr[],long long temp[], long long l, long long m, long long r)
    {
         // Your code here
         long long n1 = m-l+1;
         long long n2 = r-m;
         
         long long i = l,j=m+1;
         long long k = l;
         long long ans = 0;
         while(i<=m && j<=r){
             if(arr[i]<=arr[j]){
                 temp[k] = arr[i];
                 k++;i++;
             }else{
                 ans+=m-i+1;
                 temp[k] = arr[j];
                 k++;j++;
             }
         }
         
         while(i<=m){
             temp[k] = arr[i];
             k++;i++;
         }
         while(j<=r){
             temp[k] = arr[j];
             k++;j++;
         }
         
         for(int i = l;i<=r;i++){arr[i] = temp[i];}
         
         return ans;
    }
    public:
    long long mergeSort(long long  arr[],long long temp[], long long  l, long long r)
    {
        //code here
        long long ans = 0;
        
        if(l<r){
        long long mid = l + (r-l)/2;
            ans+= mergeSort(arr,temp,l,mid);
            ans+=mergeSort(arr,temp,mid+1,r);
            ans+=merge(arr,temp,l,mid,r);
        }
        return ans;
    }
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        
        // perform the merge sort and while merging check out all pair in a tricky way
        long long temp[n];
        return mergeSort(arr,temp,0,n-1);
        
        
    }

};