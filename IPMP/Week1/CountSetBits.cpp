//count set bits of n - Brian Kernighan’s Algorithm
int countSetBits(int n) {
    int count = 0;
    while(n) {
        n = n & (n-1);
        count++;
    }
    return count;
}