// Number of pairs

// LINK:- https://practice.geeksforgeeks.org/problems/number-of-pairs-1587115620/1

class Solution{
    public:
    
    // X[], Y[]: input array
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    
    int count(int ele,int arr[],int n,vector<int> y){
        if(ele==0){return 0;}
        if(ele==1){return y[0];}
        
        int idx  = upper_bound(arr,arr+n,ele)-arr;
        int pair = n-idx;
        
        // always add
        pair+= (y[0]+y[1]);
        
        // exceptions
        if(ele==2){
            pair-=(y[3]+y[4]);
        }
        
        if(ele==3){
            pair+=(y[2]);
        }
        
        return pair;
    }
    
    long long countPairs(int X[], int Y[], int M, int N)
    {
       //Your code here
       
    //   if y is greater than x than it satisfy the condition, exception is in 0 1 2 3 4 
    
        vector<int> countY(5,0);
        for(int i = 0;i<N;i++){
            if(Y[i]<5){countY[Y[i]]++;}
        }
        
        sort(Y,Y+N);
        long long ans = 0;
        for(int i = 0;i<M;i++){
            ans += count(X[i],Y,N,countY);
        }
        return ans;
    }
};