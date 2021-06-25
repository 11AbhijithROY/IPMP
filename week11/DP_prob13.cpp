class Solution {
public:
     int dp[103][103];
    int sol(vector<int>& cuts, int i, int j){
        if(j-i<=1)return 0; 
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=1e9;
        for(int k=i+1;k<j;k++){
        int temp=sol(cuts,i,k)+sol(cuts,k,j)+(cuts[j]-cuts[i]);
                ans=min(ans,temp);
            
        }
        return dp[i][j]=ans;
    }
    int minCost(int n, vector<int>& cuts) {
        memset(dp,-1,sizeof dp);
        cuts.insert(cuts.begin(),0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        return sol(cuts,0,cuts.size()-1);
    }
};