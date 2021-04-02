#include<iostream>
#include<vector>
using namespace std;
vector<int> binsearch(int arr[], int l, int r) {
        if(r < l){
            return {-1};
        }
        int mid = l + (r-1)/2;
        if(arr[mid] == mid+1){
            return {mid};
        }
        if(arr[mid] > mid)
            return binsearch(arr, l, mid - 1);
        return binsearch(arr, mid + 1, r);
    }
	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    return {binsearch(arr, 0, n - 1)};
	}