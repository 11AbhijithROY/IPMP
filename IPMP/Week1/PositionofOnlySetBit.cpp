//find the position of only set bit
bool checkifPowerof2(int n) {
        return n && (!(n & (n - 1)));
    }
    int findPosition(int N) {
        // code here
        unsigned i = 1, pos = 1;
        if(checkifPowerof2(N)) {
            while(!(i & N)) {
                i = i << 1;
                ++pos;
            }
            return pos;
        }
        else
            return -1;
    }