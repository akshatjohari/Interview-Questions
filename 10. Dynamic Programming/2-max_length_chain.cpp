// Max length chain

// LINK:- https://practice.geeksforgeeks.org/problems/max-length-chain/1

class Solution{
public:
    static bool mysort(struct val p1, struct val p2){
        return p1.second<p2.second;
    }

    /*You are required to complete this method*/
    int maxChainLen(struct val p[],int n){
        //Your code here
        sort(p,p+n,mysort);
        
        int ans = 1;
        int out = p[0].second;
        for(int i = 1;i<n;i++){
            if(p[i].first>out){
                ans++;
                out = p[i].second;
            }
        }
        
        return ans;
    }
};