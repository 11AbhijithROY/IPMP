//Devise a way to find an element in the rotated array in O(log n) time using binary search.
#include<iostream>

using namespace std;

int findPivot(int arr[], int l, int r) {
    if (r < l)
        return -1;
    if (r == l)
        return l;
    int mid = (l + r) / 2; 
    if (mid < r && arr[mid] > arr[mid + 1])
        return mid;
  
    if (mid > l && arr[mid] < arr[mid - 1])
        return (mid - 1);
  
    if (arr[l] >= arr[mid])
        return findPivot(arr, l, mid - 1);
  
    return findPivot(arr, mid + 1, r);
    
}
int binsearch(int arr[], int l, int r, int key) {
    int m;
    while(l <= r) {
        m = (l+r)/2;
        if(arr[m] == key) {
            return m;
        }
        if(arr[m] < key){
            return binsearch(arr, m + 1, r, key);
        }
        return binsearch(arr, l, m - 1, key);
    }
}
int pivotedbinsearch(int arr[], int size, int key) {
    int pivot = findPivot(arr, 0, size);
    if(pivot == -1) {
        binsearch(arr,0,size, key);
    }
    if (arr[pivot] == key)
        return pivot;
  
    if (arr[0] <= key)
        return binsearch(arr, 0, pivot - 1, key);
  
    return binsearch(arr, pivot + 1, size - 1, key);

}
int main() {
    int arr[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 };
    int size = 9, key = 3;
    pivotedbinsearch(arr, size, key);
    
}