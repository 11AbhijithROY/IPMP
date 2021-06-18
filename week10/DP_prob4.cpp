class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        if(m==0)
            return 0;
        int n=matrix[0].size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
               if(matrix[i][j]=='1')
               {
                  if(i!=0&&j!=0)
                    matrix[i][j]=1+min({matrix[i-1][j]-'0',matrix[i-1][j-1]-'0',matrix[i][j-1]-'0'})+'0';
                  ans=max(ans,matrix[i][j]-'0');
               }

           }
        }
        return ans*ans;   
    }
};