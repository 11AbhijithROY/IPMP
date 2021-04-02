//count no of bits to convert a to b
#include<iostream>
int countsetBits(int num) {
        int count = 0;
        while(num) {
            num = num & (num - 1);
            count++;
        }
        return count;
    }
    int countBitsFlip(int a, int b){
        
        // Your logic here
        return countsetBits(a^b);
    }