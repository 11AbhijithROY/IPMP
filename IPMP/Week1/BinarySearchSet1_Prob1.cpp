//Given an array of N distinct integers, find floor value of input ‘key’.
#include <iostream>

using namespace std;
int binsearch(int A[], int key, int l, int r) {
    int m;
    while(l <= r) {
        m = l + (r-1)/2;
        if(A[m] <= key)
            l = m;
        else
            r = m;
    }
    return A[l];
}
int floorbinsearch(int A[], int key, int size) {
    if(key < A[0])
        return -1;
    return binsearch(A, key, 0, size);
}
int main() {
    int A[] = {-1, 2, 3, 5, 6, 8, 9, 10};
    int size = 8;
    int key = 7;
    if(floorbinsearch(A, key, size))
        cout<<"\nFound!";
    else
    {
            cout<<"\nNot found";
    }
    
}