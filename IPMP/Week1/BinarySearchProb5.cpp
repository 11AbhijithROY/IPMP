#include<iostream>
#include<vector>

using namespace std;
vector<int> printUnsorted(int arr[], int n) {
	    // code here
	    int i;
	    for(i = 0;i < n - 1;i++){
	        if(arr[i] > arr[i+1])
	            break;
	    }
	    int s = i;
	    if(s == n - 1) {
	        cout<<"\nArray is fully sorted";
	        return {-1};
	    }
	    for(i = n - 1; i > 0;i--) {
	        if(arr[i] < arr[i - 1])
	            break;
	    }
	    int e = i;
	    int max = arr[s];int min = arr[s];
	    for(int j = s+1;j <= e;j++) {
	        if(arr[j] > max)
	            max = arr[j];
	       if(arr[j] < min)
	            min = arr[j];
	    }
	    for(int j = 0;j < s;j++) {
	        if(arr[j] > min){
	            s = j;
	            break;
	        }
	    }
	    for(int j = e;j < n;j++){
	        if(arr[j] < max){
	            e = j;
	            break;
	        }
	    }
	    return {s,e};
	}