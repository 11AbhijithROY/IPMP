#include<vector>
#include<iostream>
using namespace std;
    int binsearch(int arr[], int l, int r, int key) {
	    if(r < l)
	        return -1;
	    int m = l + (r-1)/2;
	    
	        if(arr[m] == key)
	            return m;
	       if(arr[m] > key)
	            return binsearch(arr, l, m - 1, key);
	       return binsearch(arr, m + 1, r, key);
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int index = binsearch(arr, 0, n - 1, x);
	    if(index == -1){
	        return -1;
	    }
	    int l = index - 1;
	    int count = 1;
	    while(l >= 0 && arr[l] == x){
	        count++;
	        l--;
	    }
	    int r = index + 1;
	    while(r < n && arr[r] == x){
	        count++;
	        r++;
	    }
	    return count;
	}