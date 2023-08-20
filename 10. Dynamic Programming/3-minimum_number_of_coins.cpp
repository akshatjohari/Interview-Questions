// Minimum number of Coins

// LINK:- https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1

class Solution{
public:
    vector<int> minPartition(int num)
    {
        // code here
        vector<int> coins = {2000,500,200,100,50,20,10,5,2,1};
        int n = coins.size();
        
        vector<int> ans;
        for(int i = 0;i<n;i++){
            while(num>=coins[i]){
                ans.push_back(coins[i]);
                num-=coins[i];
            }
        }
        
        return  ans;
    }
};