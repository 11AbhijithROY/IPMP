int missingNumber(int arr[], int n) { 
        
        // Your code here
        sort(arr, arr + n);int i, k;
        for(i = 0;i < n;i++){
            if(arr[i] > 0)
                break;
        }
        for(i,k = 1;i < n;i++,k++){
            if(arr[i] != k){
                return k;
            }
        }
    } 