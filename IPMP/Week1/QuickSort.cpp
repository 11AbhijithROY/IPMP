#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution
{
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot = arr[high];
       int i = low - i;
       for(int j = low;j <= high;j++) {
           if(arr[j] < pivot){
               i++;
               swap(arr[i],arr[j]);
           }
       }
       swap(arr[i+1],arr[high]);
       return i+1;
    }
    void quickSort(int arr[], int low, int high);
    {
        // code here
        if(low < high) {
            int pi = partition(arr,low,high);
            quickSort(arr,low, pi - 1);
            quickSort(arr, pi+1,high);
        }
    }
};