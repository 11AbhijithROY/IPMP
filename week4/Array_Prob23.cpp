class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = 0, r = nums.size();
        int suml = 0, sumr = 0;
        for(int i = 0;i < nums.size();i++)
            suml += nums[i];
        for(int i = 0;i < nums.size();i++){
            suml -= nums[i];
            if(sumr == suml) return i;
            sumr += nums[i];
            }
        return -1;    
        }
};