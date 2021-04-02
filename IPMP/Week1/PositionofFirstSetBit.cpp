//position of first set bit
#include<math.h>
unsigned int getFirstSetBit(int n){
        
        return log2(n & -n) + 1;
        
    }