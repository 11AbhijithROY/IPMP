void segregateEvenOdd(int arr[], int n) {
	    // code here
	    int l = 0, r = n - 1;
	    while(l < r){
	        while(arr[l] == 0 && l < r){
	            l++;
	        }
	        while(arr[r] == 1 && l < r){
	            r--;
	        }
	        if(l < r){
	            arr[l] = 0;
                arr[r] = 1;
	            l++;
	            r--;
	        }
	    }
	}
