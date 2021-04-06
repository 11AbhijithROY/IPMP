 vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int XOR = nums[0];
        int set_bit, i, *x = 0, *y = 0;
        for(int i = 1;i < nums.size();i++){
            XOR = XOR ^ nums[i];
        }
        set_bit = XOR & ~(XOR-1);
        for(int i = 0;i < nums.size();i++) {
            if(nums[i] & set_bit){
                *x = *x ^ nums[i];
            }
            else
                *y = *y ^ nums[i];
        }
        return {*x,*y};
    }