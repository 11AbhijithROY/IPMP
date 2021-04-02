#include<vector>
class Solution
{
  public:
  
        int rightrotate(int n, int d){
            return (n >> d)|(n << (32 - d));
        }
        int leftrotate(int n, int d){
            return (n << d)|(n >> (32 - d));
        }
        vector<int> rotate(int n, int d)
        {
            //code here.
            return {leftrotate(n, d), rightrotate(n, d)};
        }
};