#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[], int n)
{
    // Your code here   
    bool swapped = false;
    for(int i = 0;i < n - 1;i++) {
        for(int j = 0;j < n - 1 -i;j++) {
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!swapped)  
            break;
    }
}