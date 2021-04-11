//XOR method
vector<int> twoOddNum(int Arr[], int N)  
    {
        // code here
        int XOR = Arr[0];
        for(int i = 1;i < N;i++) {
            XOR = XOR ^ Arr[i];
        }
        int set_bit = XOR & ~(XOR - 1);
        int x = 0, y = 0;
        for(int i = 0;i < N;i++){
            if(set_bit & Arr[i])
                x = x ^ Arr[i];
            else
                y = y ^ Arr[i];
        }
        return {y,x};
    }
//hashing method
