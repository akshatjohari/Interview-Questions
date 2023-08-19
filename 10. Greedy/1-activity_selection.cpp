// Activity Selection

// LINK:- https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1

class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        for(int i = 0;i<n;i++){
            v.push_back({end[i],start[i]});
        }
        
        sort(v.begin(),v.end());
        
        int out = v[0].first;
        int ans = 1;
        for(int i = 1;i<n;i++){
            if(v[i].second>out){
                ans++;
                out = v[i].first;
            }
        }
        
        return ans;
    }
};