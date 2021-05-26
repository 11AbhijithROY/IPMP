class Solution {
public:
    void swap(vector<int> &nums, int i, int j){   
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    void permute2(vector<int> &nums, int i, int j, vector<vector<int>> &ans){
        if(i==j) {ans.push_back(nums); return;}
        for(int a = i; a<=j; a++){
        swap(nums, i, a);         
        permute2(nums, i+1, j, ans);           
        swap(nums, i, a);           
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permute2(nums, 0, nums.size()-1, ans);      
        return ans;
    }
};