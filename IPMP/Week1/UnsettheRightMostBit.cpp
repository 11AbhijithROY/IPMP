//Given n, Unset/Turn off the rightmost set bit
int unsetRightSetBit(unsigned int n)
{
    return n & (n - 1);
}
 
