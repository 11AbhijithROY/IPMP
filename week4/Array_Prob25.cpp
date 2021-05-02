vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here   
    vector<long long int> res;
    vector<long long int> left, right;
    left[0] = 1;
    right[n - 1] = 1;
    for(int i = 1;i < n;i++){
        left[i] = nums[i - 1] * left[i - 1];
    }
    for(int j = n - 2;j >=0;j--){
        right[j] = right[j + 1] * nums[j+1]l
    }
    for(int i = 0;i < n;i++){
        res[i] = left[i] * right[i];
    }
    return res;
}